#Selection Sort
def selectionSort(arr):
    n=len(arr)
    for i  in range(n-1):
        mini=i
        for j in range(i+1,n):
            if arr[j]<arr[mini]:
                mini=j
        arr[i],arr[mini]=arr[mini],arr[i]


#Example Usage
size=int(input("Enter the size of the Array:"))
num=[]
for i in range(size):
    val=int(input())
    num.append(val)
print(f"Before Sorting : {num}")
selectionSort(num)
print(f"After Sorting : {num}")



"""
Notes:
-Minimum is found and placed w.r.t first index onwards.
-Recommend for small input.

stable : False 
In-place : True 

TC : o(n^2)
    Best Case : O(n^2) 
    Worst Case : O(n^2) 
SC : O(1)
"""
