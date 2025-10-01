print ("task 1")
SideA = float(input("Enter your 1st side of triangle :"))
SideB = float(input("Enter your 2nd side of triangle :"))
SideC = float(input("Enter your 3rd side of triangle :"))
if SideA == SideB == SideC :
    print ("The triangle is equilateral")
elif SideA !=SideB != SideC :
    print ("The triangle is scalene")
else :
    print ("The triangle is isosceles")
print("Task 2")
age = int(input("Enter your age of the person :"))
if int(age) >= 55 and age <= 150 :
    print("The price for ticket of " + str(age) + "years old is 20 SAR")
elif int(age) >= 21 and age <= 54 :
    print("The price for ticket of " + str(age) + "years old is 40 SAR")
elif int(age) >= 13 and age <= 20 :
    print("The price for ticket of " + str(age) + "years old is 20 SAR")
elif int(age) >= 3 and age <= 12 :
    print("The price for ticket of " + str(age) + "years old is 10 SAR")
elif int(age) >= 1 and age <= 3 :
    print("The price for ticket of " + str(age) + "years old is FREE")
else:
    print("The entered number is out of the ticket range")
print("Task 3")
grade =  int(input("Enter the numerical grade :"))
if int(grade) >= 90 and grade <= 100:
    print("A")
elif grade >= 80:
    print("B")
elif grade >= 70:
    print("C")
elif grade >= 60:
    print("D")
elif int(grade) < 60 and grade >= 0:
    print("F")
else:
    print("The number of grade is incorrect.")