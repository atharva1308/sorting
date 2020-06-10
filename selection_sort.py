#Selection Sort
def sort(arr):
    n=len(arr)
    print(n)
    for i in range(n):
        min_index=i
        for j in range(i+1,n):
            if arr[j]<arr[min_index]:
                min_index=j
        arr[i], arr[min_index]=arr[min_index], arr[i]

    print(arr)

arr=[21,51,78,10,31,14]
sort(arr)
