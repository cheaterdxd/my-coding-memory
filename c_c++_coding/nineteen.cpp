#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s",s);
	int len= strlen(s);
	int count_i=0;
	int count_n=0;
	int count_t = 0;
	int count_e=0;
	for(int i = 0;i<len;i++){
		if(s[i]=='i') count_i++;
		if(s[i]=='n') count_n++;
		if(s[i]=='t') count_t++;
		if(s[i]=='e') count_e++;
	}
//	printf("count_i: %d\n",count_i);
//	printf("count_e: %d\n",count_e);
//	printf("count_n: %d\n",count_n);
//	printf("count_t: %d\n",count_t);
	count_n=count_n/3;
	count_e=count_e/3;
	int min = count_i;
	if(count_t<min) min = count_t;
	if(count_n<min) min = count_n;
	if(count_e<min) min = count_e;
	printf("%d",min);
	return 0;
}
