def getdate():
    import datetime
    return datetime.datetime.now()

def log(n):
    if n==1:
        print("1:Exercise")
        print("2:Food")
        print("Which section you want to access?:")
        ch=int(input())
        if ch==1:
            content=input("Enter your Exercise: ")
            with open("dhruv-ex.txt","a") as f:
                f.write(str([str(getdate())])+":"+content)
                print("Written Successfully!")
        elif ch==2:
            content=input("Enter your Food: ")
            with open("dhruv-f.txt","a") as f:
                f.write(str([str(getdate())]) + ":" + content)
                print("Written Successfully!")
        else:
            print("PLEASE ENTER A VALID CHOICE")

    elif n==2:
        print("1:Exercise")
        print("2:Food")
        ch = int(input())
        if ch == 1:
            content = input("Enter your Exercise: ")
            with open("harry-ex.txt", "a") as f:
                f.write(str([str(getdate())]) + ":" + content)
                print("Written Successfully!")
        elif ch == 2:
            content = input("Enter your Food: ")
            with open("harry-f.txt", "a") as f:
                f.write(str([str(getdate())]) + ":" + content)
                print("Written Successfully!")
        else:
            print("PLEASE ENTER A VALID CHOICE")

    elif n==3:
        print("1:Exercise")
        print("2:Food")
        ch = int(input())
        if ch == 1:
            content = input("Enter your Exercise: ")
            with open("om-ex.txt", "a") as f:
                f.write(str([str(getdate())]) + ":" + content)
                print("Written Successfully!")
        elif ch == 2:
            content = input("Enter your Food: ")
            with open("om-f.txt", "a") as f:
                f.write(str([str(getdate())]) + ":" + content)
                print("Written Successfully!")
        else:
            print("PLEASE ENTER A VALID CHOICE")

    else:
        print("PLEASE ENTER A VALID INPUT")

def retrieve(n):
    if n==1:
        print("1:Exercise")
        print("2:Food")
        ch=int(input())
        if ch==1:
            with open("dhruv-ex.txt") as f:
                for i in f:
                    print(i,end="\n")
        elif ch==2:
            with open("dhruv-f.txt") as f:
                for i in f:
                    print(i,end="\n")
        else:
            print("PLEASE ENTER A VALID CHOICE")

    elif n==2:
        print("1:Exercise")
        print("2:Food")
        ch=int(input())
        if ch==1:
            with open("harry-ex.txt") as f:
                for i in f:
                    print(i,end="\n")
        if ch==2:
            with open("harry-f.txt") as f:
                for i in f:
                    print(i,end="\n")
        else:
            print("PLEASE ENTER A VALID CHOICE")

    elif n==3:
        print("1:Exercise")
        print("2:Food")
        ch=int(input())
        if ch==1:
            with open("om-ex.txt") as f:
                for i in f:
                    print(i,end="\n")
        if ch==2:
            with open("om-f.txt") as f:
                for i in f:
                    print(i,end="\n")
        else:
            print("PLEASE ENTER A VALID CHOICE")

    else:
        print("PLEASE ENTER A VALID CHOICE")

def main():
    print("Health Management\n")
    print("1:Dhruv")
    print("2:Harry")
    print("3:Om")
    print("Enter Serial Number whose data you want to access: ")
    name=int(input())

    print("1:Log")
    print("2:Retrieve")
    print("Enter which operation you want to perform: ")
    op=int(input())

    if op==1:
        log(name)
    elif op==2:
        retrieve(name)
    else:
        print("PLEASE ENTER A VALID CHOICE")
main()