print("ENTER THE NUMBER OF VALUE YOU WANT TO SORT")
n = int(input())
userinput = [0] * (n)

count = 0
count1 = 0
print("DO YOU WANT TO SORT IN ASCENDING OR DECENDING")
print("Enter a or d")
choice = input()
if choice == "a":
    for count in range(0, n - 1 + 1, 1):
        print("Enter the number")
        input = int(input())
        userinput[count] = input
    count = 0
    for count in range(0, n + 1, 1):
        for count1 in range(0, n - 1 + 1, 1):
            if userinput[count] > userinput[count1 + 1]:
                placeholder = userinput[count1]
                userinput[count1] = userinput[count1 + 1]
                userinput[count1 + 1] = placeholder
    count = 0
    for count in range(0, n - 1 + 1, 1):
        print(userinput[count])
else:
    for count in range(0, n - 1 + 1, 1):
        print("Enter the number")
        input = int(input())
        userinput[count] = input
    count = 0
    for count in range(0, n + 1, 1):
        for count1 in range(0, n - 1 + 1, 1):
            if userinput[count] < userinput[count1 + 1]:
                placeholder = userinput[count1]
                userinput[count1] = userinput[count1 + 1]
                userinput[count1 + 1] = placeholder
    count = 0
    for count in range(0, n - 1 + 1, 1):
        print(userinput[count])
