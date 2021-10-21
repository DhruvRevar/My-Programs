def withdrawal(amount,balance):
    balance=balance-amount
    return balance

def deposit(amount,balance):
    balance=balance+amount
    return balance


def main():
    
    while True :
        print ("\t\t1 : Input a new Transaction log")
        print ("\t\t2 : Exit")
        ch = int(input("Enter your choice : "))
        if(ch == 2):
            print("End the program")
            quit()
            break
        elif(ch==1) :
            balance = 0
            list1 = []
            print("Enter the transaction : ")
            while True:
                data = input()
                if(data==""):
                    break
                list1.append(data.split())
            for transaction in list1:
                if(transaction[0]=='W'):
                    if(balance < int(transaction[1])) :
                        print("[%s %d]: Transaction Declined, Insufficient balance"%(transaction[0],int(transaction[1])))
                    else:
                        balance=withdrawal(int(transaction[1]),balance)
                        print("[%s %d]: Successful Transaction "%(transaction[0],int(transaction[1])))
                elif (transaction[0]=='D'):
                    balance=deposit(int(transaction[1]),balance)
                    print("[%s %d]: transaction successful"%(transaction[0],int(transaction[1])))
                    
            print("\nTotal balance in the account is :Rs %d"%balance)
        else:
            print("Wrong choice is entered !! Try again")
                                   
main()
quit()