/*!
 * Rainmeter Audio Analyzer Generator
 * Copyright 2014-2016 Damien "Mistic" Sorel (http://www.strangeplanet.fr)
 * Licensed under MIT (http://opensource.org/licenses/MIT)
 */

'use strict';

const pkg = require('./package.json');
const tinygradient = require('tinygradient');
const tinycolor = require('tinycolor2');
const colorbrewer = require('colorbrewer');
const fs = require('fs');
const DEFAULTS = require('./defaults.json');


/* Define options
 * ------------------------------------------------------- */
var program = require('commander');

program.version(pkg.version)
    .usage('[options] <file>')
    .option('--width [value]', 'widget width (default: ' + DEFAULTS.width + ')', validateInt, DEFAULTS.width)
    .option('--height [value]', 'widget height (default: ' + DEFAULTS.height + ')', validateInt, DEFAULTS.height)
    .option('--orientation [value]', 'orientation of the widget. up, down, left or right (default: ' + DEFAULTS.orientation.value + ')', validateOrientation, DEFAULTS.orientation)
    .option('--bands [value]', 'number of bands (default: ' + DEFAULTS.bands + ')', validateInt, DEFAULTS.bands)
    .option('--padding [value]', 'relative space between each band (default: 2/5)', validateFraction, DEFAULTS.padding)
    .option('--colors [color,...]', 'list of colors or a ColorBrewer scheme or a path to a JSON file containing a TinyGradient array (default: ' + DEFAULTS.colors + ')', DEFAULTS.colors)
    .option('--fade [enabled]', 'change bars opacity depending on volume (default: ' + DEFAULTS.fade + ')', validateBool, DEFAULTS.fade)
    .option('--min-alpha [value]', 'minimum bar opacity (default: ' + DEFAULTS.minAlpha + ')', validateInt, DEFAULTS.minAlpha)
    .option('--max-alpha [value]', 'maximum bar opacity (default: ' + DEFAULTS.maxAlpha + ')', validateInt, DEFAULTS.maxAlpha)
    .option('--marks [color,...]', 'add marks on each band, same syntax as --colors (default: ' + DEFAULTS.marks + ')', validateBool, DEFAULTS.marks)
    .option('--background [color]', 'add a solid background color, use rgba syntax for transparency (default: ' + DEFAULTS.background + ')', DEFAULTS.background)
    .option('--blur [enabled]', 'enable Aero blur (default: ' + DEFAULTS.blur + ')', validateBool, DEFAULTS.blur)
    .option('--now-playing [enabled]', 'enable display of artist-album-track and progress bar (default: ' + DEFAULTS.nowPlaying + ')', validateBool, DEFAULTS.nowPlaying)
    .option('--now-playing-color [color]', 'color of the player texts (default: ' + DEFAULTS.nowPlayingColor + ')', DEFAULTS.nowPlayingColor)
    .option('--now-playing-size [size]', 'size of the text (default: ' + DEFAULTS.nowPlayingSize + ')', validateInt, DEFAULTS.nowPlayingSize)
    .option('--now-playing-open [enabled]', 'open folder on click on cover (default: ' + DEFAULTS.nowPlayingOpen + ')', validateBool, DEFAULTS.nowPlayingOpen)
    .option('--cover-mask [type]', 'mask applied to the cover. off, round, bevel, cd, grunge (default: ' + DEFAULTS.coverMask + ')', validateMask, DEFAULTS.coverMask)
    .option('--channel [channel]', 'which channel to perform the analysis on (default: ' + DEFAULTS.channel + ')', DEFAULTS.channel)
    .option('--fft [...]', 'size, overlap, attack, decay, min, max, sensitivity (default: 2048,1024,40,60,20,20000,40)', validateFFT, DEFAULTS.fft)
    .option('--verbose', 'output effective config (default: ' + DEFAULTS.verbose + ')', DEFAULTS.verbose);

// custom help
program.on('--help', () => {
    console.log('  Examples:');
    console.log('');
    console.log('    $ ' + program._name + ' --width 1024 --bands 512 --bands 16 --padding 0.5 Visualizer.ini');
    console.log('    $ ' + program._name + ' --orientation left --width 200 --height 1080 Visualizer.ini');
    console.log('    $ ' + program._name + ' --colors Spectral --marks white Visualizer.ini');
    console.log('    $ ' + program._name + ' --colors #25f,#fe1 Visualizer.ini');
    console.log('    $ ' + program._name + ' --now-playing true --now-playing-open false Visualizer.ini');
    console.log('');

    console.log('  ColorBrewer schemes :');
    var cs = [], i = 0;
    Object.keys(colorbrewer).forEach((c, j) => {
        cs[i] = (cs[(j + 1) % 7 == 0 ? i++ : i] || '    ') + padRight(c, 10);
    });
    cs.forEach(c => console.log(c));
    console.log('');
});


/* Parse config
 * ------------------------------------------------------- */
program.parse(process.argv);

if (program.args.length === 0) {
    program.help();
}

var config = program;

config.file = validateFile(program.args[0]);
config.background = tinycolor(config.background);
config.nowPlayingColor = tinycolor(config.nowPlayingColor);
config.colors = validateGradient(config.colors, config.bands);
config.marks = validateGradient(config.marks === true ? config.colors : config.marks, config.bands);

// we swap width and height if vertical and default values
if (config.orientation.vertical && config.width == DEFAULTS.width && config.height == DEFAULTS.height) {
    config.width = DEFAULTS.width2;
    config.height = DEFAULTS.height2;
}

var band_base = !config.orientation.vertical ? config.width : config.height;
config.band_width = Math.ceil(band_base / config.bands * (1 - config.padding));
config.band_length = config.orientation.vertical ? config.width : config.height;
config.band_gap = Math.floor(band_base / config.bands * config.padding);

if (config.verbose) {
    console.log('');
    console.log(config);
    console.log('');
}


/* Generate file content
 * ------------------------------------------------------- */

// header
var file_content = `
[Rainmeter]
Update=10
SkinWidth=${config.width}
SkinHeight=${config.height}
BackgroundMode=${config.background.isValid() ? '2' : '1'}
SolidColor=${color2rgba(config.background)}
`;

if (config.blur) {
    file_content += `
Blur=1
BlurRegion=1, 0, 0, ${config.width}, ${config.height}
`;
}

if (config.nowPlaying) {
    file_content += `
ContextTitle=Choose player (#Player#)
ContextAction=[!Refresh]
ContextTitle2=-
ContextTitle3=AIMP
ContextAction3=[!WriteKeyValue Variables Player AIMP][!WriteKeyValue Variables PlayerN 0][!Refresh]
ContextTitle4=Spotify
ContextAction4=[!WriteKeyValue Variables Player Spotify][!WriteKeyValue Variables PlayerN 1][!Refresh]
ContextTitle5=iTunes
ContextAction5=[!WriteKeyValue Variables Player iTunes][!WriteKeyValue Variables PlayerN 0][!Refresh]
ContextTitle6=foobar2000
ContextAction6=[!WriteKeyValue Variables Player CAD][!WriteKeyValue Variables PlayerN 0][!Refresh]
ContextTitle7=Winamp
ContextAction7=[!WriteKeyValue Variables Player Winamp][!WriteKeyValue Variables PlayerN 0][!Refresh]
ContextTitle8=WMP
ContextAction8=[!WriteKeyValue Variables Player WMP][!WriteKeyValue Variables PlayerN 0][!Refresh]
ContextTitle9=-
ContextTitle10=Toggle auto Spotify (#AutoSpotify#)
ContextAction10=[!WriteKeyValue Variables AutoSpotify (1-#AutoSpotify#)][!WriteKeyValue Variables PlayerN [M-Next-PlayerN]][!Refresh]

[Variables]
Player=AIMP
PlayerN=0
AutoSpotify=1
`;
}

file_content += `
[Metadata]
Name=Audio Analyzer
Author=Mistic
Version=${pkg.version}
License=MIT
`;

// main measure
file_content += `
[measureAudioFast]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=${config.fft.size}
FFTOverlap=${config.fft.overlap}
FFTAttack=${config.fft.attack}
FFTDecay=${config.fft.decay}
Bands=${config.bands + 1}
FreqMin=${config.fft.min}
FreqMax=${config.fft.max}
Sensitivity=${config.fft.sensitivity}
`;

// optional "slow" measure
if (config.marks) {
    file_content += `
[measureAudioSlow]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=${config.fft.size}
FFTOverlap=${config.fft.overlap}
FFTAttack=${config.fft.attack}
FFTDecay=${config.fft.decay * 10}
Bands=${ config.bands + 1}
FreqMin=${config.fft.min}
FreqMax=${config.fft.max}
Sensitivity=${config.fft.sensitivity}
`;
}

// bars and optional marks
for (var i = 1; i <= config.bands; i++) {
    let bandGap = (i === 1 ? Math.floor(config.band_gap / 2) : config.band_gap + 'R');
    let barColor = !config.fade ? color2rgba(config.colors[i - 1]) : color2rgb(config.colors[i - 1]) + `,([measureAudioFast_${i}] * (${config.maxAlpha} - ${config.minAlpha}) + ${config.minAlpha})`;

    file_content += `
[measureAudioFast_${i}]
Measure=Plugin
Plugin=AudioLevel
Parent=measureAudioFast
Channel=${config.channel}
Type=Band
BandIdx=${i}

[meterBar_${i}]
Meter=Bar
BarOrientation=${!config.orientation.vertical ? 'Vertical' : 'Horizontal'}
Flip=${parseInt(+config.orientation.flip)}
MeasureName=measureAudioFast_${i}
BarColor=${barColor}
X=${config.orientation.vertical ? 0 : bandGap}
Y=${!config.orientation.vertical ? 0 : bandGap}
W=${config.orientation.vertical ? config.band_length : config.band_width}
H=${!config.orientation.vertical ? config.band_length : config.band_width}
DynamicVariables=1
`;

    if (config.marks) {
        let posFormula = `((${!(config.orientation.vertical ^ config.orientation.flip) ? '1 - ' : ''}[measureAudioSlow_${i}]) * ${config.band_length})`;

        file_content += `
[measureAudioSlow_${i}]
Measure=Plugin
Plugin=AudioLevel
Parent=measureAudioSlow
Channel=${config.channel}
Type=Band
BandIdx=${i}

[meterLine_${i}]
Meter=Image
SolidColor=${barColor}
X=${config.orientation.vertical ? posFormula : '0r'}
Y=${!config.orientation.vertical ? posFormula : '0r'}
W=${config.orientation.vertical ? 1 : config.band_width}
H=${!config.orientation.vertical ? 1 : config.band_width}
DynamicVariables=1
`;
    }
}

// now playing
if (config.nowPlaying) {
    let npColor = color2rgba(config.nowPlayingColor);

    file_content += `
[M-Status-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=State
UpdateDivider=100

[M-Status-1]
Measure=Plugin
Plugin=Process
ProcessName=Spotify.exe
UpdateDivider=100
IfCondition=(#AutoSpotify# = 1) && ([M-Status-1] = 1) && (#PlayerN# = 0)
IfTrueAction=[!WriteKeyValue Variables PlayerN 1][!Log "Auto enable Spotify"][!Refresh]
IfCondition2=(#AutoSpotify# = 1) && ([M-Status-1] <> 1) && (#PlayerN# = 1)
IfTrueAction2=[!WriteKeyValue Variables PlayerN 0][!Log "Auto disable Spotify"][!Refresh]
DynamicVariables=1

[M-Next-PlayerN]
Measure=Calc
Formula=Floor((1-#AutoSpotify# + #PlayerN#) / 2)
DynamicVariables=1
UpdateDivider=-1

[M-Status]
Measure=Calc
Formula=[M-Status-#PlayerN#]
DynamicVariables=1
IfBelowValue=1
IfBelowAction=!HideMeterGroup Player
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Player

[M-Title-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Title
UpdateDivider=100

[M-Title-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=TrackName
UpdateDivider=100

[M-Artist-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Artist
UpdateDivider=100

[M-Artist-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=ArtistName
UpdateDivider=100

[M-Album-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Album
UpdateDivider=100

[M-Album-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
UpdateDivider=100
Type=AlbumName

[M-Year-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Year
RegExpSubstitute=1
Substitute="^0$":"","([0-9]{4}).*":"(\\1)"
UpdateDivider=100

[M-AlbumID-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
UpdateDivider=100
Type=AlbumURI
RegExpSubstitute=1
Substitute="^spotify:album:(.*)$":"https://api.spotify.com/v1/albums/\\1"
OnChangeAction=[!CommandMeasure M-AlbumParser-1 "Reset"][!CommandMeasure M-AlbumParser-1 "Update"]

[M-AlbumParser-1]
Measure=Plugin
Plugin=WebParser
URL=[&M-AlbumID-1]
UpdateDivider=100
DynamicVariables=1
RegExp=(?siU)"release_date" : "(.*)"

[M-Year-1]
Measure=Plugin
Plugin=WebParser
Url=[M-AlbumParser-1]
StringIndex=1
RegExpSubstitute=1
Substitute="([0-9]{4}).*":"(\\1)"
UpdateDivider=100

[M-Position-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Position
UpdateDivider=100

[M-Position-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=Position
UpdateDivider=100

[M-Duration-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Duration
UpdateDivider=100

[M-Duration-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=Length
UpdateDivider=100

[M-Progress-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Progress
UpdateDivider=100

[M-Progress-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=Progress
UpdateDivider=100

[M-Cover-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=Cover
Substitute="":"#@#Default.png"
UpdateDivider=100

[M-Cover-1]
Measure=Plugin
Plugin=SpotifyPlugin.dll
Type=AlbumArt
Res=300
DefaultPath=#@#Default.png
CoverPath=#@#Cover.png
UpdateDivider=100
`;

    if (config.nowPlayingOpen) {
        file_content += `
[M-Path-0]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[M-Status-0]
PlayerType=File
RegExpSubstitute=1
Substitute="^(.*)\\\\([^\\\\]+)$":"\\1"
UpdateDivider=100

[M-Path-1]
Measure=String
String=
UpdateDivider=-1
`;
    }

    file_content += `
[Progress]
Group=Player
Meter=Bar
MeasureName=M-Progress-#PlayerN#
X=0
Y=${config.height - 2}
W=${config.width}
H=3
BarColor=${npColor}
BarOrientation=Horizontal
UpdateDivider=100

[Cover]
Group=Player
Meter=Image
MeasureName=M-Cover-#PlayerN#
ImageAlpha=200
X=20
Y=20
W=${Math.round((config.height - 40))}
H=${Math.round((config.height - 40))}
AntiAlias=1
UpdateDivider=100
`;

    if (config.coverMask) {
        file_content += `MaskImageName=#@#Mask-${config.coverMask}.png
`;
    }

    if (config.nowPlayingOpen) {
        file_content += `LeftMouseUpAction=["C:\\Windows\\explorer.exe" [M-Path-#PlayerN#]]
`;
    }

    file_content += `
[Artist]
Group=Player
Meter=String 
MeasureName=M-Artist-#PlayerN#
X=${config.height}
Y=${Math.round(config.height / 2)}
StringAlign=LeftBottom
FontSize=${config.nowPlayingSize}
FontFace=Lato
FontColor=${npColor}
AntiAlias=1
UpdateDivider=100

[Album]
Group=Player
Meter=String 
MeasureName=M-Album-#PlayerN#
MeasureName2=M-Year-#PlayerN#
X=0R
Y=0r
StringAlign=LeftBottom
FontSize=${config.nowPlayingSize}
FontFace=Lato Light
FontColor=${npColor}
AntiAlias=1
Text="- %1 %2"
UpdateDivider=100

[Title]
Group=Player
Meter=String
MeasureName=M-Title-#PlayerN#
X=${config.height}
Y=${Math.round(config.height / 2)}
StringAlign=LeftTop
FontSize=${Math.round(config.nowPlayingSize * 1.3)}
FontFace=Lato Light
FontColor=${npColor}
AntiAlias=1
UpdateDivider=100

[Time]
Group=Player
Meter=String
MeasureName=M-Position-#PlayerN#
MeasureName2=M-Duration-#PlayerN#
X=${config.width - 10}
Y=${config.height - 30}
FontFace=Lato
FontSize=10
FontColor=${npColor}
AntiAlias=1
Text="%1/%2"
StringAlign=Right
UpdateDivider=100
`;
}


/* End
 * ------------------------------------------------------- */
fs.writeFileSync(config.file, file_content);

console.log('== Visualizer skin created ==');


/* Functions
 * ------------------------------------------------------- */
function padRight(s, l, c) {
    return s + Array(l - s.length + 1).join(c || " ");
}

/**
 * Parse literal fraction or float
 */
function validateFraction(v, def) {
    if (/^[1-9]+[0-9]*\/[1-9]+[0-9]*$/.test(v)) {
        var f = v.split('/');
        v = parseInt(f[0]) / parseInt(f[1]);
    }
    else {
        v = parseFloat(v);
    }
    return !isNaN(v) ? v : def;
}

/**
 * Parse int
 */
function validateInt(v, def) {
    v = parseInt(v);
    return !isNaN(v) ? v : def;
}

/**
 * Parse boolean
 */
function validateBool(v, def) {
    if (v === true || v === 1 || v === 'true' || v === '1') {
        return true;
    }
    else if (v === false || v === 0 || v === 'false' || v === '0') {
        return false;
    }
    else {
        return def;
    }
}

/**
 * Parse file
 */
function validateFile(v) {
    if (!/\.ini$/.test(v)) {
        return v + '.ini';
    }
    return v;
}

/**
 * Parse color
 */
function validateGradient(v, bands) {
    if (v === false) {
        return false;
    }

    if (v.indexOf('.json') !== -1) {
        v = JSON.parse(fs.readFileSync(v));
    }
    else if (colorbrewer[v]) {
        var brewer = colorbrewer[v],
            brewerMax = 0, brewerMin = Number.MAX_VALUE;

        for (var i in brewer) {
            brewerMax = Math.max(brewerMax, i);
            brewerMin = Math.min(brewerMin, i);
        }

        if (brewerMin > bands) {
            v = brewer[brewerMin];
        }
        else if (brewerMax > bands) {
            v = brewer[bands];
        }
        else {
            v = brewer[brewerMax];
        }
    }
    else if (typeof v === 'string') {
        if (v[0] == '[') {
            v = v.slice(1, -1);
        }
        v = v.split(',');
    }

    if (v.length > bands) {
        v = v.slice(0, bands);
    }
    else if (v.length === 1) {
        v.push(v[0]);
    }

    return tinygradient.rgb(v, bands);
}

/**
 * Parse orientation
 */
function validateOrientation(v, def) {
    if (['up', 'down', 'right', 'left'].indexOf(v) === -1) {
        return def;
    }

    return {
        value: v,
        vertical: v == 'right' || v == 'left',
        flip: v == 'down' || v == 'left'
    };
}

/**
 * Parse cover mask
 */
function validateMask(v, def) {
    v = validateBool(v, v);

    if (v === false) {
        return false;
    }
    if (v === true) {
        return def;
    }
    if (['off', 'round', 'bevel', 'cd', 'grunge'].indexOf(v) === -1) {
        return def;
    }
    if (v === 'off') {
        return false;
    }

    return v;
}

/**
 * Parse FFT parameters
 */
function validateFFT(v, def) {
    v = v.split(',');

    if (v.length !== 7) {
        return def;
    }

    return {
        size: parseInt(v[0]),
        overlap: parseInt(v[1]),
        attack: parseInt(v[2]),
        decay: parseInt(v[3]),
        min: parseInt(v[4]),
        max: parseInt(v[5]),
        sensitivity: parseInt(v[6])
    };
}

/**
 * Convert Tinycolor to r,g,b,a
 */
function color2rgba(c) {
    c = c.toRgb();
    return c.r + ',' + c.g + ',' + c.b + ',' + (c.a * 255);
}

/**
 * Convert Tinycolor to r,g,b
 */
function color2rgb(c) {
    c = c.toRgb();
    return c.r + ',' + c.g + ',' + c.b;
}