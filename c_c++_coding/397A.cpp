#include<stdio.h>
int main(){
	int size;
	scanf("%d",&size);
	int arr[size][2];
	int max =0;
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i][0]);
		scanf("%d",&arr[i][1]);
		if(arr[i][0]>max) max = arr[i][0];
		if(arr[i][1]>max) max = arr[i][1];
	}
	int check[max+1]={0};
	for(int i=1;i<size;i++){
		for(int j=arr[i][0];j<arr[i][1];j++){
			if(check[j]==0) check[j]=1;
		}
	}
	int output=0;
	for(int i =0;i<=max;i++){
		if(check[i]==0 && i<arr[0][1]) output++;
	}
	printf("%d",output);
	return 0;
}
