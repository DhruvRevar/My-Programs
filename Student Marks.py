
def accept_marks(A):
    n=int(input("Enter total number of students:"))
    for i in range(n):
        while True:
            x= input("Enter the marks of the student %d: "%(i+1))
            if(x=="AB"):
                x=-1 #absent students
                break
            x=int(x)
            if(x>=0 and x<=30):
                break
            else:
                print("PLEASE ENTER VALID MARKS")
        A.append(x)
    print("Marks accepted and stored successfully!")

def display_marks(A):
    print("\nMarks scored in FDS")
    for i in range(len(A)):
        if(A[i]==-1):
            print("\nStudent %d: AB"%(i+1))
        else:
            print("\nStudent %d: %d"%(i+1,A[i]))

def  average_of_class(A):
    sum=0
    for i in range(len(A)):
        if(A[i] != -1):
            sum=sum+A[i]
    avg=sum/len(A)
    display_marks(A)
    print("\nAverage score of class is %.2f\n"%avg)

def  highest_and_lowest(A):
    max=0
    min=31
    for i in range(len(A)):
        if (max < A[i]):
            max = A[i]
            max_indx=i
        if (min>A[i] and A[i]!=-1):
            min = A[i]
            min_indx=1
        display_marks(A)
        print("Highest score of class is %d scored by student %d"%(max,max_indx))
        print("Lowest score of class is %d scored by student %d"%(min,min_indx))

def absent_students(A):
    for i in range(len(A)):
        count = 0
        if (A[i]==-1):
            count=count+1
        display_marks(A)
        print("\nAbsent Students Count=%d"%count)

def highest_frequency_marks(A):
    freq=0
    count=0
    for i in range(len(A)):
        if (A[i] != -1):
            for j in range(len(A)):
                if (A[i]==A[j]):
                    count=count+1
        if (count>freq):
            Marks=A[i]
            freq=count
        display_marks(A)
        print("\nMarks with highest frequency is %d (%d)"%(Marks,freq))

def main():
    marks=[]
    while True:
        print("\t 1:Accept FDS Marks")
        print("\t 2:Average score of class")
        print("\t 3:Highest and Lowest score of class")
        print("\t 4:Count of students who were absent for the test")
        print("\t 5:Display mark with highest frequency")
        print("\t 6:Exit")
        ch=int(input("Enter your choice: "))
        if (ch==1):
            accept_marks(marks)
            display_marks(marks)
        elif(ch==2):
            average_of_class(marks)
        elif(ch==3):
            highest_and_lowest(marks)
        elif(ch==4):
            absent_students(marks)
        elif(ch==5):
            highest_frequency_marks(marks)
        elif(ch==6):
            print("END OF PROGRAM")
            quit()
        else:
            print("Please Enter a Valid Choice")
main()


