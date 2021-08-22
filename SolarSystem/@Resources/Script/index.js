const { SolarSystem, MERCURY, VENUS, EARTH, MARS, JUPITER, SATURN, SUN, URANUS, NEPTUNE, MOON } = require('@tubular/astronomy');
const { DateTime } = require('@tubular/time');

const GEOCENTRIC = process.argv[2] === '1';
const system = new SolarSystem();
const PLANETS = [SUN, MERCURY, VENUS, EARTH, MARS, JUPITER, SATURN, URANUS, NEPTUNE];
const now_jde = DateTime.julianDay(new Date().getTime());

let result = PLANETS.map((planet) => {
    const pos = GEOCENTRIC ? system.getEclipticPosition(planet, now_jde) : system.getHeliocentricPosition(planet, now_jde);
    const name = system.getPlanetName(planet);
    const angle = 360 - pos.longitude.degrees;
    return `${name}:${angle}|`;
}).join('');

const moonPos = system.getEclipticPosition(MOON, now_jde);
const moonName = system.getPlanetName(MOON);
const moonAngle = 360 - moonPos.longitude.degrees;
result += `${moonName}:${moonAngle}|`;

console.log(result);
