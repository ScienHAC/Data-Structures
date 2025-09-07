# Practice: Searching and Sorting
# Name: Student
# Date: Sept 2025

# Linear Search
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Binary Search
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

# Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

# Test the functions
if __name__ == "__main__":
    numbers = [64, 34, 25, 12, 22, 11, 90]
    print("Original:", numbers)
    
    # Search
    target = 25
    index = linear_search(numbers, target)
    print(f"Linear search for {target}: Index {index}")
    
    # Sort
    sorted_nums = bubble_sort(numbers.copy())
    print("Sorted:", sorted_nums)
    
    # Binary search on sorted array
    index = binary_search(sorted_nums, target)
    print(f"Binary search for {target}: Index {index}")
