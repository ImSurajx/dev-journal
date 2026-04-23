# boolean
is_boiling = True
stri_count = 5
total_actions = stri_count + is_boiling  # upcasting
print(f"total actions: {total_actions}")

milk_present = "histesh"  # no milk
print(f"is there milk: {bool(milk_present)}")

water_hot = True
tea_added = False
can_server = water_hot and tea_added
print(f"can serve tea: {can_server}")