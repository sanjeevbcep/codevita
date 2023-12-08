def count(row):
    count = 0
    last = -1
    for i in range(len(row) - 1):
        if row[i] != row[i + 1]:
            count += (i - last) * (len(row) - i - 1)
            last = i
    return count

ashokrow = input().strip()
anandrow = input().strip()

if not all(tree in 'ML' for tree in ashokrow + anandrow):
    print("Invalid input", end="")
else:
    ashok = count(ashokrow)
    anand = count(anandrow)

    if ashok > anand:
        print("Ashok", end="")
    elif anand > ashok:
        print("Anand", end="")
    else:
        print("Draw", end="")