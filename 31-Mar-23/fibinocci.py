def compfibbo(n):
    f1 = 0
    f2 = 1
    i = 0
    while i < n - 1:
        f3 = f1 + f2
        print(f1)
        f1 = f2
        f2 = f3
        i = i + 1
    
    return f1

# Main
print("ENTER THE NUMBER TO GET ITS FIBINOCCI SERIES")
n = int(input())
print("The fibinocci series of " + str(n) + " is")
print(compfibbo(n))
