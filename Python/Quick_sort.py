# Quick sort algorithm

def quicksort(array):
    if len(array) <= 1:
        return array
    else:
        pivot = array.pop()
    items_greater = []
    items_lower = []
    for item in array:
        if item > pivot:
            items_greater.append(item)
        else:
            items_lower.append(item)
    return quicksort(items_lower) + [pivot] + quicksort(items_greater)

lst = [ ]
n = int(input("Enter number of elements : "))
  
for i in range(0, n):
    element =int(input("enter value:"))
    lst.append(element)
      
print("list before sorting",lst)
print(quicksort(lst))
