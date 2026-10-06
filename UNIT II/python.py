term = int(input("Enter the number : "))
first = 0
second = 1
print("Fibonacci Series : ")
for i in range(0,term+1):
    next = first + second
    print(first)
    first = second
    second = next
    