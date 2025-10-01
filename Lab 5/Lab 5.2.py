digit = 0
numbers = ("0123456789")
Cin = input("Enter a number: ")
for i in Cin:
    if i in numbers:
        digit += 1
if digit == 1 or digit == 2:
    print(digit, "digit")
elif digit > 2:
    print(digit , "digits")
else:
    print("not a number")


