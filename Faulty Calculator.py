a=float(input("Enter first number "))
b=float(input("Enter second number "))
print("1:Addition ")
print("2:subtraction ")
print("3:Multiplication ")
print("4:Division ")
ch=int(input("Enter your choice "))
while(True):
    if a==45 and b==3 and ch==3:
        print("555")
        break
    if a==56 and b==9 and ch==1:
        print("77")
        break
    if a==56 and b==6 and ch==4:
        print("4")
        break
    if ch==1:
        add=a+b
        print(add)
        break
    elif ch==2:
        sub=a-b
        print(sub)
        break
    elif ch==3:
        mul=a*b
        print(mul)
        break
    elif ch==4:
        div=a/b
        print(div)
        break
    else:
        print("Please enter a valid choice")
        break