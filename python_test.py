#!/usr/bin/python3
Dog = {
        "Name": "Gandalf"
        }
Dog["colores"] = []
Dog["colores"].append("Yelow")
Dog["Friends"] = [dict({"Name": 'Soly', "Age": 24})]
Dog["Friends"].append(dict({"Name": "Rafa", "Age": 33}))
Dog["Friends"][1].update({"Age": 33})
print(Dog, end="\n")
