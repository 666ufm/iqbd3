i = 0
b = 0
positive = 0
negative = 0
zero = 0

while i < 10:
    print   (i + 1 , "- Enter your number: " )
    a = input ()
    if int(a) > 0:
        positive = positive + 1
    elif int(a) < 0:
        negative = negative + 1
    else :
        zero = zero + 1
    i = i + 1

print("The positive number is ", positive)
print("The negative number is ", negative)
print("The zero number is ", zero)