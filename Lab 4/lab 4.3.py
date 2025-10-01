Students = -1
failed = -1
passed = 0
i = 0
x = 0
while i != -1 :
    Students += 1
    i = int(input("Enter student grade or type -1 to quit: "))
    if i >=60 :
        passed += 1
    else :
        failed += 1
print ("The percentage of students who passed the course:" , passed / Students * 100 , "%")
print ("The percentage of students who failed the course:" , failed / Students * 100 , "%")
print ("The number of students in this course:" , Students )
