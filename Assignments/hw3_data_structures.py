# Assignment 3: Data Structures
# Name: Student
# Date: Sept 2025

# Q1: List operations
print("=== LISTS ===")
fruits = ["apple", "banana", "cherry"]
fruits.append("date")
fruits.insert(1, "blueberry")
print("Fruits:", fruits)
print("First fruit:", fruits[0])
print("Last 2 fruits:", fruits[-2:])

# Q2: Tuple operations  
print("\n=== TUPLES ===")
coordinates = (10, 20, 30)
x, y, z = coordinates
print(f"Point: ({x}, {y}, {z})")
print("Coordinates:", coordinates)

# Q3: Set operations
print("\n=== SETS ===")
set1 = {1, 2, 3, 4}
set2 = {3, 4, 5, 6}
print("Set 1:", set1)
print("Set 2:", set2)
print("Union:", set1 | set2)
print("Intersection:", set1 & set2)

# Q4: Dictionary operations
print("\n=== DICTIONARIES ===")
student = {"name": "Alice", "age": 20, "grade": "A"}
student["city"] = "NYC"
print("Student info:", student)
print("Name:", student.get("name"))
print("Keys:", list(student.keys()))

# Q5: Remove duplicates
numbers = [1, 2, 2, 3, 3, 4, 5, 5]
unique = list(set(numbers))
print(f"\nOriginal: {numbers}")
print(f"Unique: {unique}")
