# Basic Concepts Review
# Name: Student
# Date: Sept 2025

print("=== PYTHON BASICS REVIEW ===")

# Variables and types
name = "Alice"
age = 20
height = 5.6
is_student = True

print(f"Name: {name} (type: {type(name).__name__})")
print(f"Age: {age} (type: {type(age).__name__})")
print(f"Height: {height} (type: {type(height).__name__})")
print(f"Student: {is_student} (type: {type(is_student).__name__})")

# Basic operations
numbers = [1, 2, 3, 4, 5]
print(f"\nNumbers: {numbers}")
print(f"Sum: {sum(numbers)}")
print(f"Max: {max(numbers)}")
print(f"Length: {len(numbers)}")

# String operations
text = "Hello World"
print(f"\nText: '{text}'")
print(f"Uppercase: {text.upper()}")
print(f"Split: {text.split()}")
print(f"Length: {len(text)}")

# Conditional statements
score = 85
if score >= 90:
    grade = "A"
elif score >= 80:
    grade = "B"
else:
    grade = "C"
print(f"\nScore: {score}, Grade: {grade}")

# Functions
def greet(name):
    return f"Hello, {name}!"

print(f"\nGreeting: {greet('Student')}")
