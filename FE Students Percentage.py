def accept_array(A):
    n=int(input("Enter the total number of students: "))
    for i in range(n):
        x=float(input(f"Enter the first year percentage of student {i+1}: "))
        A.append(x)
        print("Array accepted successfully")

def display_array(A):
    n=len(A)
    if n==0:
        print("No records in the database")
    else:
        print("Array of FE Marks: ")
        for i in range(n):
            print(f"{A[i]}")

def selection_sort(A):
    for i in range(len(A)):
        #Find the minimum element in remaining unsorted array
        min_i= 1
        for j in range(i+1,len(A)):
            if A[j] < min_i:
                min_i=A[j]
        #Swap the found minimum element with first element
        A[i],A[min_i]=A[min_i],A[i]

def bubble_sort(A):
    n=len(A)
    for Pass in range(1,n):
        for i in range(n-Pass):
            if(A[i] < A[i+1]):
                temp = A[i]
                A[i] = A[i+1]
                A[i+1] = temp

def main():
    A=[]
    while True:
        print("1:Accept and Display the FE Marks")
        print("2:Selection Sort Ascending order")
        print("3:Bubble sort Descending order")
        print("4:Display top five scores")
        print("5:Exit")
        ch=int(input("Enter your choice: "))
        if ch==1:
            accept_array(A)
            display_array(A)
        elif ch==2:
            print("Marks before sorting")
            display_array(A)
            selection_sort(A)
            print("Marks after sorting")
            display_array(A)
        elif ch==3:
            print("Marks before sorting")
            display_array(A)
            bubble_sort(A)
            print("Marks after sorting")
            display_array(A)
        elif ch==4:
            if(len(A)>=5):
                print("Top Five Scores:")
                for i in range(5):
                    print("%.2f"%A[i])
            else:
                print("Top Five Scores:")
                for i in range(5):
                    print("%.2f"%A[i])
        elif ch==5:
            print("END OF PROGRAM")
            exit()
        else:
            print("PLEASE ENTER VALID INPUT")
main()