#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findNearest(int arr[],int arrSize, int subValue, int k){
    for(int i =0;i<arrSize;i++){
        if(arr[i] !=-1 && abs(arr[i]-subValue) == k) return i;
    }
    return -1;
}
int* absolutePermutation(int n, int k, int* result_count) {
    int arr[n];
    int* result = (int *) malloc(n*sizeof(int));
	result_count = (int *)malloc(sizeof(int));
    for(int i=0;i<n;i++){
        arr[i] = i+1;
        // printf("arr[%d]: %d\n",i,arr[i]);
    }
    // printf("k: %d\n",k);
    for(int i=0;i<n;i++){
        int index = findNearest(arr, n, i+1, k);
        if(index == -1){
            int *a = (int *) malloc(1);
            a[0]=-1;
            *result_count = 1;
            return a;
        }
        result[i] = arr[index];
        // printf("i = %d\nindex: %d\narr[index]: %d\n",i+1,index,arr[index]);
        arr[index] = -1;
    }
    *result_count = n;
    return result;
}
int main(){
	int *n;
	int *result = absolutePermutation(10,5,n);
	for(int i =0;i<(*n);i++){
		printf("%d ",*(result+i));
	}
}

