#include<stdio.h>

void quickSort(int arr[], int left, int right);
int partition(int arr[], int left, int right);
void swap(int *a, int *b);
void printArr(int arr[], int size);

int main()
{
	int arr[]={1,37,5782,57,371,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,size-1);
	printArr(arr,size);
	return 0;	
}

void quickSort(int arr[],int left, int right)
{
	int splitIndex = partition(arr,left,right);
	quickSort(arr,left,splitIndex-1); //smaller
	quickSort(arr,splitIndex+1,right); //bigger
}

int partition(int arr[], int left, int right)
{
	int splitIndex = left;
	int pivot = arr[right];
	int count = 0;
	
	int beforPivot = right - 1;
	
	for(int i=left;i<right;i++)
	{
		if(arr[i]>pivot)
		{
			swap(&arr[i],&arr[beforPivot-count]);
			count++;
		}
	}
	swap(&pivot,&arr[beforPivot-count]);
	splitIndex = beforPivot-count;
	return splitIndex;
}

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}

void printArr(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
}  
