ingredients = ["water", "milk", "black_tea"]
print(f"ingredients: {ingredients}")
ingredients.append("sugar")  # add sugar
print(f"ingredients: {ingredients}")
ingredients.remove("water")
print(f"ingredients: {ingredients}")

spice_options = ["ginger", "cardamon"]
chai_ingredients = ["water", "milk"]
print(f"chai: {chai_ingredients}")
chai_ingredients.extend(spice_options)
print(f"chai: {chai_ingredients}")
chai_ingredients.insert(2, "coffe");
print(f"chai: {chai_ingredients}")
chai_ingredients.pop();
print(f"chai: {chai_ingredients}")
chai_ingredients.reverse();
print(f"chai: {chai_ingredients}")
chai_ingredients.sort();
print(f"chai: {chai_ingredients}")

sugar_level = [0,1,2,3,45]
print(f"maximum: {max(sugar_level)}")
print(f"maximum: {min(sugar_level)}")
