print("Welcome to IOB Bank")

# Declaring parametrs which needs users information for transaction
# Reading values for the above parameters
print("Enter your account number")
accountno = input()
print("Enter your name=")
name = input()
print("Enter your pin")
pin1 = int(input())
print("Enter your balance")
balance = int(input())

# checking if balance is greater than 500rs
if balance >= 500:
    
    # if true cross verify with the pin number
    print("Enter your pin for verification")
    pin2 = int(input())
    
    # check if the pin matches
    if pin1 == pin2:
        print("Amount you want to withdraw")
        withdrawalamount = int(input())
        if withdrawalamount > balance:
            print("Your withdrawal amount should be less than balance")
        else:
            print("Your transaction is being processed")
            amountleft = balance - withdrawalamount
            if amountleft < 500:
                print("Your account balance is less than 500 after transaction.Please deposit ")
            print("Total balance in your account is=" + str(amountleft))
    else:
        print("Please verify your pin")
else:
    
    # if false stop the transaction
    print("Amount is less than minimum balance.Please deposit money for future withdrawal")
