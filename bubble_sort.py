#Bubble Sort
def sort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(n-i-1):
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1]=arr[j+1], arr[j]
         
    print(arr)

raw_string=input("Enter Numbers Separated By Commas :: ")
raw_nums=raw_string.split(",")
n=len(raw_nums)
nums=[]
for i in range(n):
    nums.append(int(raw_nums[i]))

sort(nums)
