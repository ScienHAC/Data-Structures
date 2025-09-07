# Practice: Comparison Problems
# Name: Student
# Date: Sept 2025

# Problem 1: Factorial comparison
def factorial_iterative(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result

def factorial_recursive(n):
    if n <= 1:
        return 1
    return n * factorial_recursive(n-1)

print("Factorial of 5:")
print("Iterative:", factorial_iterative(5))
print("Recursive:", factorial_recursive(5))

# Problem 2: Data structure properties
print("\n=== Data Structure Properties ===")

# Mutable vs Immutable
my_list = [1, 2, 3]
my_tuple = (1, 2, 3)

print("List (mutable):", my_list)
my_list.append(4)
print("After append:", my_list)

print("Tuple (immutable):", my_tuple)
# my_tuple.append(4)  # This would cause an error

# Duplicates allowed vs not
my_list_dup = [1, 2, 2, 3, 3]
my_set = {1, 2, 2, 3, 3}

print("\nList with duplicates:", my_list_dup)
print("Set (no duplicates):", my_set)

# Problem 3: When to use what
print("\n=== When to use which? ===")
print("List: Ordered, mutable, allows duplicates")
print("Tuple: Ordered, immutable, allows duplicates") 
print("Set: Unordered, mutable, no duplicates")
print("Dict: Key-value pairs, mutable, unique keys")
