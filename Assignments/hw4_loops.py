# Assignment 4: Loops and Iteration
# Name: Student
# Date: Sept 2025

# Q1: For loop patterns
print("=== FOR LOOPS ===")
# Pattern 1
for i in range(1, 6):
    print("*" * i)

print()

# Pattern 2 - multiplication table
print("5 times table:")
for i in range(1, 11):
    print(f"5 x {i} = {5*i}")

# Q2: While loops
print("\n=== WHILE LOOPS ===")
count = 10
while count > 0:
    if count % 2 == 0:
        print(count)
    count -= 1

# Q3: List comprehension
print("\n=== LIST COMPREHENSION ===")
squares = [x**2 for x in range(1, 6)]
print("Squares:", squares)

evens = [x for x in range(1, 21) if x % 2 == 0]
print("Even numbers:", evens)

# Q4: Nested loops
print("\n=== NESTED LOOPS ===")
for i in range(1, 4):
    for j in range(1, 4):
        print(f"{i}x{j}={i*j}", end="  ")
    print()

# Q5: Loop with break/continue
print("\n=== BREAK/CONTINUE ===")
for i in range(1, 11):
    if i == 5:
        continue
    if i == 8:
        break
    print(i, end=" ")
print()
