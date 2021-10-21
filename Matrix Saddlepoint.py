def accept_matrix(m,r,c):

    for i in range(r):
        A= []
        for j in range(c):
            A.append(int(input(c)))
        m.append(A)
    print("\n Matrix accepted successfully")

def display_matrix(m,r,c):
    print("\nMatrix (%d, %d) : "%(r,c))
    for i in range(r):
        print("\t\t", end=" ")
        for j in range(c):
            print("%d"%m[i][j],end=' ')
        print("")

def  saddlepoint(m,r,c):
    count=0
    for i in range(r):  #minimum element in row i
        min_row= m[i] [0]
        col_ind=0
        for j in range(1,c):
            if (min_row > m[i] [j]):
                min_row = m[i] [j]
                col_ind=j
        #check if the min_row is also the maximum element of column or not
        flag=1
        for ri in range(r):
            if(min_row < m[ri][col_ind]):
                flag=0
                break
        if (flag==1):
            count += 1
            print("\n%d value is minimum in row(%d) and maximum in column(%d)"%(min_row,i+1,col_ind+1))
    if (count==0):
        print("\nno Saddle Point Exist for the given Matrix")
    else:
        print("\n%d Saddle Point Found in the given Matrix "%count)


def main():
    while True:
        print("\n1: Accept Matrix")
        print("\n2: Display Matrix")
        print("\n3: Find the Saddle Point")
        print("\n4: Exit")
        ch= int(input("Enter your choice: "))
        if(ch == 1):
            mat=[]
            print("\n Enter the order of the Matrix (row,col):")
            r = int(input("\n row= "))
            c = int(input("\n col= "))
            print("\nEnter the elements of the Matrix:")
            accept_matrix(mat,r,c)
        elif(ch == 2):
            display_matrix(mat,r,c)
        elif(ch == 3):
            display_matrix(mat,r,c)
            saddlepoint(mat,r,c)
        elif(ch == 4):
            print("END OF PROGRAM")
            quit()
        else:
            print("PLEASE ENTER A VALID CHOICE")
main()