def Accept_array(A):
    n=int(input("Enter the total number of students: "))
    print("\nEnter the Roll numbers")
    for i in range(n):
        x=int(input("\nEnter the Roll Number of student %d: "%(i+1)))
        A.append(x)
    print("\nStudent Info accepted successfully!")
    return n

def sort(roll_no):
    for i in range(1,len(roll_no)):
        key = roll_no[i]
        j=i-1
        while j>=0 and key<roll_no[j]:
            roll_no[j+1]=roll_no[j]
            j-=1
            roll_no[j+1]=key
    return roll_no

def print_roll(roll_no):
    for i in range(len(roll_no)):
        print(roll_no[i])

def ternary_search(roll,roll_find):
    left=0
    right=len(roll)-1
    while left <= right:
        mid1= left+(right-left)//3
        mid2=left+2*(right-left)//3
        if roll_find==roll[left]:
            return left
        elif roll_find==roll[right]:
            return right
        elif roll_find < roll[left] or roll_find > roll[right]:
            return -1
        elif roll_find <= roll[mid1]:
            right=mid1
        elif roll_find > roll[mid1] and roll_find <= roll[mid2]:
            left=mid1+1
            right=mid2
        else:
            left=mid2+1
    return -1

def main():
    A = []
    while (True):
        print("1: Accept and Display Students Info")
        print("2: Sort the Roll numbers")
        print("3: Ternary Search")
        print("4: Exit")
        ch=int(input("Enter your choice: "))

        if ch==1:
            A=[]
            n=Accept_array(A)

        elif ch==2:
            print("\nELements sorted:\n")
            sort_roll=sort(A)
            print_roll(sort_roll)
        elif ch==3:
            find_roll=int(input("\nEnter the Roll Number to be Searched: "))
            index=ternary_search(sort_roll,find_roll)
            if index != -1:
                print("\nThe Roll Number ",find_roll," is found at the position ",index+1)
            else:
                print("\nRoll Number ",find_roll," not found!")
        elif ch==4:
            print("\nEnd of Program")
            exit()
        else:
            print("\nPlease Enter a Valid Choice")
main()