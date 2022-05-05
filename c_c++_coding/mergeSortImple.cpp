#include<stdio.h>
#include <stdlib.h> 
//today i learn merge sort
void merge(int arr[], int l, int m, int r) // m is the last element of left part
{
	int sizeL = m-l+1;
	int sizeR = r-(m+1)+1; //m + 1 is the first element of right part
	
	int arrayL[sizeL],arrayR[sizeR]; //create temp part array
	
	// copy data -> start
	for(int i = 0;i < sizeL;i++)
	{
		arrayL[i] = arr[i+l];
	}
	for(int j = 0;j < sizeR;j++)
	{
		arrayR[j] = arr[j+m+1];
	}
	//-> end
	
	int idexL =0, idexR=0;
	int idexMerge=l; // merge from left
	
	while(idexL < sizeL && idexR < sizeR) //stop if one of them reach last elements
	{
		if(arrayL[idexL] <= arrayR[idexR])
		{
			arr[idexMerge] = arrayL[idexL];
			idexL++;
		}
		else
		{
			arr[idexMerge] = arrayR[idexR];
			idexR++;
		}
		idexMerge++;
	}
	// add the remain elements into arr -> start
	while(idexL < sizeL) 
	{
		arr[idexMerge] = arrayL[idexL];
		idexMerge++;
		idexL++;
	}
	while(idexR < sizeR) 
	{
		arr[idexMerge] = arrayR[idexR];
		idexMerge++;
		idexR++;
	}
	// -> end
}
void mergeSort(int arr[], int size, int left, int right)
{
	if(left<right)
	{
		int mid = left+ (right-left)/2;
		mergeSort(arr,size,left,mid); //mergesort left part
		mergeSort(arr,size,mid+1,right); //mergesort right part
		merge(arr,left,mid,right);
	}
	
}
void printfArr(int arr[],int size)
{
	for(int i = 0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int unsort[] ={ 1,32,5,123,653,2,4,63,17,7 };
	int arr_size = sizeof(unsort) / sizeof(unsort[0]);
	
	printfArr(unsort,arr_size);
	
	mergeSort(unsort,arr_size,0,arr_size-1);
	
	printfArr(unsort,arr_size);
	return 0;
}
