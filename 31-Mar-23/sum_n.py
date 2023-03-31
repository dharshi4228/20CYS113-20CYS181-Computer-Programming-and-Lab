print("ENTER A NUMBER TO GET ITS SUM")
i = int(input())
sum = 0
number = 1
while number <= i:
    sum = sum + number
    number = number + 1
print("The addition of n numbers" + str(sum))
