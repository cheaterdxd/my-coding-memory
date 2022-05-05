#include<stdio.h>
int main(){
	int n,p,k;
	scanf("%d",&n);
	scanf("%d",&p);
	scanf("%d",&k);
	if((p-k)>1) printf("<< ");
	for(int i=p-k;i<=p+k;i++){
		if(i<1) continue;
		if(i>n) break;
		if(i==p) printf("(%d) ",i);
		else printf("%d ",i);
	}
	if((p+k)<n) printf(">>");
	return 0;
}
