inp=int(input("Enter how many rows you want to print "))
TorF=int(input("Type 1 or 0 "))
if TorF==1:
    for i in range(1,inp+1):
        for j in range(1,i+1):
            print("*",end="")
        print()
if TorF==0:
    for i in range(inp,0,-1):
        for j in range(1,i+1):
            print("*",end="")
        print()