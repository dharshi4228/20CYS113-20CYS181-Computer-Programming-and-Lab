def compfact(n):
    i = 1
    fact = 1
    while i <= n:
        fact = fact * i
        i = i + 1
    
    return fact

# Main
print("Enter a number to get its factorial=")
n = int(input())
if n > 0:
    print("THE FACTORIAL OF " + str(n) + "is:" + str(compfact(n)))
else:
    print("The factorial of negative numbers are not defined")
