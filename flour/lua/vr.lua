local Pizza = 'Pizza'
local dough = 'Nice Buttery Dough'
local function Sweets()
    Ingredients = 'Sauce, Bread, Mozzerella'
end

for Pizza in Pizza do
    print('There are Pizzas!, Checking for dough')
    if dough == 'Nice Buttery Dough' then
        return print('Nice Buttery Dough Found!')
    elseif dough == '' then
        return print('No Pizzas Found... You do have sweets though!', Sweets)
end
end
