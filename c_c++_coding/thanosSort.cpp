#include<stdio.h>
int sortAccept(int arr[], int begin, int end){
	for(int i = begin; i<end-1;i++){
		if(arr[i]>arr[i+1]) return 0;
	}
	return 1;
}
int main(){
	int size=0;
	scanf("%d",&size);
	int arr[size];
	for(int i = 0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int step = size;
	int begin,end;
	while(step!=1){
		begin = 0;
		end = begin+step;
		while(end<=size){
			if(sortAccept(arr,begin,end)==1){
				printf("%d",step);
				return 0;
			}
			begin+=step;
			end += step;
		}
		step = step/2;	
	}
	printf("1");
	return 0;
}
