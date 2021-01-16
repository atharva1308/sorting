#include<stdio.h>

void merge(int arr[], int start, int mid, int end){

	int i, j, k;
	int s1=mid-start+1;
	int s2=end-mid;
	int ar1[s1], ar2[s2];

	for(i=0; i<s1; i++){
		ar1[i]=arr[start+i];
	}

	for(j=0; j<s2; j++){
		ar2[j]=arr[mid+1+j];
	}

	i=0;
	j=0;
	k=start;

	while(i<s1 && j<s2){

		if(ar1[i]<=ar2[j]){
			arr[k]=ar1[i];
			i++;
		}else{
			arr[k]=ar2[j];
			j++;
		}
		k++;
	}

	while(i<s1){
		arr[k]=ar1[i];
		i++;
		k++;
	}

	while(j<s2){
		arr[k]=ar2[j];
		j++;
		k++;
	}


}

void merge_sort(int arr[], int start, int end){

	if(start<end){
	int mid=(start+end)/2;

	merge_sort(arr, start, mid);
	merge_sort(arr, mid+1, end);
	merge(arr, start, mid, end);
	
		}
}


int main(){

	int start=0, end, arr[100], size, i;

	printf("Enter The No of Elements :: ");
	scanf("%d", &size);

	printf("Enter The Elements :: \n");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	end=size-1;

	printf("Unsorted Array = \n");
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	merge_sort(arr, start, end);

	printf("Sorted Array = \n");
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}


	return 0;
}
