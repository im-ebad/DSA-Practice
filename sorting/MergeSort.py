def mergeSort(arr):
    n = len(arr)
    if n <= 1:
        return arr
    mid = n // 2
    left = arr[:mid]
    right = arr[mid:]
    leftSorted = mergeSort(left)
    rightSorted = mergeSort(right)
    return merge(leftSorted, rightSorted)


def merge(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result.extend(left[i:])
    result.extend(right[j:])
    return result


# Example Usage
size = int(input("Enter the size of the Array:"))
num = []
for i in range(size):
    val = int(input())
    num.append(val)
print(f"Before Sorting : {num}")
n = len(num)
result = mergeSort(num)
print(f"After Sorting : {result}")

"""
Notes:
-Divide and conquer approach follows
-best for linked list bcoz no extra space required

stable : True 
In-place : False 

TC : o(nlogn)
    Best Case : O(nlogn) 
    Worst Case : O(nlogn) 
SC : O(n)
"""
