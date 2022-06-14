colorList = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]

dict = {}
out = ""

for i, c in enumerate(colorList):
    dict[c] = i

out += str(dict[input()])
out += str(dict[input()])

print(int(out) * 10 ** dict[input()])
