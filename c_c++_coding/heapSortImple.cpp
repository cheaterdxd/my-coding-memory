#include<stdio.h>

void heapSort(int arr[], int size);
void heapify(int arr[], int size, int curRoot);
void swap(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) printf("%d ",arr[i]);
    printf("\n");
} 
int main()
{
	int arr[] = {3,5,7,1,10,20};
	printArray(arr,sizeof(arr)/sizeof(arr[0]));
	heapSort(arr,sizeof(arr)/sizeof(arr[0]));
//	swap(arr[0],arr[1]);
	printArray(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}

void heapSort(int arr[], int size){
	for(int i=(size/2-1); i>=0; i--) // first round sort root
	{
		heapify(arr,size,i);
	}
	
	for(int j = size-1;j>=0;j--)
	{
		swap(arr[0],arr[j]); // swap the root and last
		heapify(arr,j,0); // continue from tu root 
		
	}
}
void heapify(int arr[], int size, int currRoot){
	int leftIdex = currRoot*2+1; // left of tree
	int rightIdex = currRoot*2+2; // right of tree
	int biggest = currRoot; // maintain the index of root
	if(arr[leftIdex]>arr[biggest] && leftIdex<size)
	{
		biggest = leftIdex;
	}
	if(arr[rightIdex]>arr[biggest] && rightIdex<size)
	{
		biggest = rightIdex;
	}
	if(biggest != currRoot)
	{
		swap(arr[biggest],arr[currRoot]);
		heapify(arr,size,biggest); // continue with the subarrays
	} 
}
