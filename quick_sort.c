#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[], int start, int end){
	int pivot=arr[end];
	int low=start-1;

	for(int j=start; j<=end-1; j++){

		if(arr[j]<=pivot){
			low++;
			swap(&arr[low], &arr[j]);	
		}
	}
	swap(&arr[low+1], &arr[end]);
	return low+1;
}

void quick_sort(int arr[], int start, int end){

	if(start<end){

		int index=partition(arr, start, end);
		quick_sort(arr, start, index-1);
		quick_sort(arr, index+1, end);
	}

}

void main(){

	int i, arr[100], start, end, size;

	printf("Enter The No of Elements :: ");
	scanf("%d", &size);

	printf("Enter The Elements :: \n");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	end=size-1;
	start=0;

	printf("Unsorted Array is = ");
	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	quick_sort(arr, start, end);

	printf("Sorted Array is = ");
	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

}
