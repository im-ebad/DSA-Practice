def insertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        temp = arr[i]
        j = i - 1
        while temp < arr[j] and j >= 0:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = temp


# Example Usage
size = int(input("Enter the size of the Array:"))
num = []
for i in range(size):
    val = int(input())
    num.append(val)
print(f"Before Sorting : {num}")
insertionSort(num)
print(f"After Sorting : {num}")


"""
Notes:
-Adoptable and like a card arrangment 
-Recommend for small input.

stable : True 
In-place : True 

TC : o(n^2)
    Best Case : O(n)  --Already sorted
    Worst Case : O(n^2) 
SC : O(1)
"""
