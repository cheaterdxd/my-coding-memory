#include<stdio.h>
int main(){
	int a=0;
	scanf("%d",&a);
	printf("a: %d",a);
	int dish[a][3];
	for(int i=0;i<a;i++){
		scanf("%d",&dish[a][0]);
		scanf("%d",&dish[a][1]);
		scanf("%d",&dish[a][2]);
	}
	for(int i=0;i<a;i++){
		printf("%d %d %d",dish[i][0],dish[i][1],dish[i][2]);
	}
//	int count[a]={0};
//	for(int i = 0; i<a;i++){
//		if(--dish[i][0]>0) count[i]++;
//		if(--dish[i][1]>0) count[i]++;
//		if(--dish[i][2]>0) count[i]++;
//		if(--dish[i][0]>0 && --dish[i][1]>0) count[i]++;
//		if(--dish[i][1]>0 && --dish[i][2]>0) count[i]++;
//		if(--dish[i][0]>0 && --dish[i][2]>0) count[i]++;
//		if(--dish[i][0]>0 && --dish[i][1]>0 && --dish[i][2]>0) count[i]++;
//	}
//	for(int i = 0;i<a;i++){
//		printf("%d\n",count[i]);
//	}
	return 0;
}
