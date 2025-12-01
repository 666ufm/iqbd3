
# vars and bool
# ______________________
usernames = []
passwords = []

# funcs
# ______________________
def paswwordchecker(password, real_name, year, month):
    # vars & bool
    # ______________________
    upp_let = False  # upper letter
    low_let = False  # lower letter
    num = False  # number
    sym = False  # symbol
    score = 0

    # loop through chars
    for char in password:
        if 'A' <= char <= 'Z':
            upp_let = True
        elif 'a' <= char <= 'z':
            low_let = True
        elif '0' <= char <= '9':
            num = True
        elif char in "~!@#$%^&*+-/.,{}[]();:?<>\"'_":
            sym = True

    # scoring
    if upp_let:
        score += 1
    if low_let:
        score += 1
    if num:
        score += 1
    if sym:
        score += 1
    if len(password) >= 8:
        score += 1
    if real_name.lower() in password.lower():
        score -= 1
    if year in password or month in password:
        score -= 1

    # feedback
    if score <= 0:
        print("Invalid password, try again")
        return False
    elif score in range(1, 3):
        print("Weak password, try again")
        return False
    elif score == 3:
        print("Medium password")
        return True
    else:
        print("Strong password")
        return True


def add_username(name):
    usernames.append(name)

def add_password(pas):
    passwords.append(pas)


# Main program
# ________________________
real_name = str(input("Enter your name: "))
year = str(input("Enter your born date (year): "))
if int(year) < 1925 or int(year) > 2025:
    print("error")
    quit()
month = str(input("Enter your born date (month): "))
if int(month) < 1 or int(month) > 12:
    print("error")
    quit()

# loops
# ______________________
while True:
    print("\n1 sign up")
    print("2 sign in")
    print("3 exit")

    try:
        x = int(input("Enter your choice: "))
    except ValueError:
        print("Please enter a number (1–3)")
        continue

    # if statements
    # ______________________
    if x == 1:
        username = input("Enter your username: ")
        if username in usernames:
            print("Already exists")
        else:
            while True:
                pas = input("Enter your password: ")
                if paswwordchecker(pas, real_name, year, month):
                    add_username(username)
                    add_password(pas)
                    print("Account created successfully")
                    break
        print(usernames, passwords)

    elif x == 2:
        username = input("Enter your username: ")
        if username in usernames:
            idx = usernames.index(username)
            pas = input("Enter your password: ")
            if passwords[idx] == pas:
                print("Welcome " + username)
            else:
                print("Wrong password")
        else:
            print("Wrong username")

    elif x == 3:
        print("Goodbye!")
        break
