# BubbleSort
def bubbleSort(arr):
    n = len(arr)
    for i in range(n - 1):
        swapped = False
        for j in range(n - i - 1):
            if arr[j] >= arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break
    return arr


# Example Usage
size = int(input("Enter the size of the Array:"))
num = []
for i in range(size):
    val = int(input())
    num.append(val)
print(f"Before Sorting : {num}")
bubbleSort(num)
print(f"After Sorting : {num}")

"""
Notes:
ith Largest Element is put at right place in ith round.
stable : True  ,Relative order is preserved in sorted array for equal values.
In-place : True ,Rearranges the Element in original array no extra space is required.

TC : o(n^2)
    Best Case : O(n) If Array is already sorted ,Swapped helps here.
    Worst Case : O(n^2) If Array is in reversed Order.
SC : O(1)
"""
