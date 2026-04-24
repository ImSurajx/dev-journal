masala_spice = ("cardamon", "cloves", "cinnamon")
# unpack masala spices
(spice1, spice2, spice3) = masala_spice
print(f"main masala: {spice1, spice2, spice3}")
ginger_ratio, cadraomo_ratio = 2, 1  # ginger_ratio = 2, cadraomo_ratio = 1
print(f"ratio is G: {ginger_ratio} and C: {cadraomo_ratio}")
ginger_ratio, cadraomo_ratio = cadraomo_ratio, ginger_ratio  # swap
print(f"ratio is G: {ginger_ratio} and C: {cadraomo_ratio}")
# membership
print(f"is ginger in masala spices? {'ginger' in masala_spice}")
print(f"is cinnamon in masala spices? {'cinnamon' in masala_spice}")
