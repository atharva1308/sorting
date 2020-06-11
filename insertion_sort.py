# Program To Sort Integer Array Using Insertion Sort Method
def sort(arr):
    n=len(arr)
    for i in range(n):
        key=arr[i]
        j=i-1
        while j>=0 and key<arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key  
    print(arr)  # To Print The Sorted Array

# Driver Code Below
    
raw_string=input("Enter Numbers Separated By Commas :: ")
raw_nums=raw_string.split(",")
n=len(raw_nums)
nums=[]
for i in range(n):
    nums.append(int(raw_nums[i]))

sort(nums)  # Function Calling and Passing Integer Array
