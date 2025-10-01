x = int (input("enter a number"))
stringx = str(x)
reversed = ""
for i in stringx :
    reversed = i + reversed
final = int(reversed)
