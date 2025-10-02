digit = 0
all_digits = '1234567890'
number = input("Enter a number")
for x in number:
    if x in all_digits :
        digit = digit + 1

if digit == 1 or digit == 2 :
    print (digit , "digit")
elif digit >= 2 :
    print (digit , "digits")
else :
    print ("not a number")

