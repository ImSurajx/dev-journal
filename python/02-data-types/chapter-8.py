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

# operative overloading
base_liquid = ["water", "milk"]
extra_flavor = ["ginger"]

full_liquid_mix = base_liquid + extra_flavor
print(f"{full_liquid_mix}")

strong_brew = ["black_tea", "water"] * 3
print(f"string brew: {strong_brew}")

# bytearray in python:
# bytearray is a mutable sequence of bytes. It is similar to bytes, but unlike bytes, bytearray can be modified after it is created. This makes it useful for situations where you need to manipulate binary data, such as when working with files or network communication.
raw_spice = bytearray(b"cardamon")
raw_spice.replace(b"cardamon", b"cinnamon")
print(f"raw spice: {raw_spice}")

