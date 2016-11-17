function Initialize()
	Max = SELF:GetNumberOption('Max')
  Trigger = SELF:GetNumberOption('Trigger', Max)
  Speed = SELF:GetNumberOption('Speed', 1)
end

function Update()
	local Input = SELF:GetNumberOption('Input')
  
  if Input < Max then
    return Input
  elseif Input < Trigger then
    return Max
  end
  
  return Max * (1 - (Input - Trigger) * Speed)
end