def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
               
    return arr
n=int(input("enter length"))
arr=[]
for i in range(n):
    arr.append(int(input("enter the element")))
print("before sort",arr)
print("after sort",bubbleSort(arr))
