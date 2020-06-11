#Selection Sort
def sort(arr):
    n=len(arr)
    for i in range(n):
        min_index=i
        for j in range(i+1,n):
            if arr[j]<arr[min_index]:
                min_index=j
        arr[i], arr[min_index]=arr[min_index], arr[i]

    print(arr)

raw_string=input("Enter Numbers Separated By Commas :: ")
raw_nums=raw_string.split(",")
n=len(raw_nums)
nums=[]
for i in range(n):
    nums.append(int(raw_nums[i]))

sort(nums)
