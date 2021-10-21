n=18
n_guess=9
while(1):
    inp=int(input("Enter your guess "))

    if inp<18:
        print("Your guess is less than the number")

    if inp>18:
        print("Your guess is greater than the number")

    if inp==n:
        print("You won.Congratulations!")
        break
    print("You have ", n_guess, "guess remaining")
    n_guess=n_guess-1
    if n_guess==0:
        print("Game Over")
        exit()