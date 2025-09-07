# Assignment 1: Array Operations
# Name: Student
# Date: Sept 2025

# Q1: Basic array operations
arr = [10, 20, 30, 40, 50]
print("Original array:", arr)

# Insertion
arr.append(60)
print("After append:", arr)

arr.insert(2, 25)
print("After insert at index 2:", arr)

# Deletion
arr.remove(30)
print("After removing 30:", arr)

# Search
if 40 in arr:
    print("40 found at index:", arr.index(40))
else:
    print("40 not found")

# Q2: Array traversal
print("\nArray elements:")
for i, val in enumerate(arr):
    print(f"Index {i}: {val}")
