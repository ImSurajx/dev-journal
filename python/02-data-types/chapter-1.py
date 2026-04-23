sugar_amount = 2
print(f"first initial sugar: {sugar_amount}")
sugar_amount = 12
print(f"second initial sugar: {sugar_amount}")  # changing reference
# always check by id never refernce by the value always do it by id..
print(f"ID of 2: {id(2)}")  # 4404015104
print(f"ID of 12: {id(12)}")  # 4404015424
