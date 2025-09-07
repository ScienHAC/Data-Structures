# Assignment 2: Recursion
# Name: Student  
# Date: Sept 2025

# Q1: Fibonacci sequence
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

print("Fibonacci sequence:")
for i in range(8):
    print(f"F({i}) = {fibonacci(i)}")

# Q2: Factorial
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n-1)

print(f"\nFactorial of 5: {factorial(5)}")

# Q3: String reversal
def reverse_string(s):
    if len(s) <= 1:
        return s
    return s[-1] + reverse_string(s[:-1])

text = "hello"
print(f"\nReverse of '{text}': {reverse_string(text)}")

# Q4: Sum of digits
def sum_digits(n):
    if n == 0:
        return 0
    return (n % 10) + sum_digits(n // 10)

num = 1234
print(f"\nSum of digits in {num}: {sum_digits(num)}")
