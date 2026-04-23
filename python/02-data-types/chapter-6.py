chai_type = "ginger_chai"
customer_name = "suraj"
print(f"order for {customer_name} : {chai_type} please!")
chai_description = "aromatic and bold"
print(
    f"first word: {chai_description[0:7:2]}"
)  # every second character (inital position: end position: instance(like each after 2 char))
print(f"last word: {chai_description[8:]}")
print(f"last word: {chai_description[::-1]}")  # reverse a string..

label_text = "codjjjƒƒƒƒ"
encoded_label = label_text.encode("utf-8")
decoded_label = encoded_label.decode("utf-8")
print(f"encoded label: {encoded_label}")
print(f"decoded label: {decoded_label}")
