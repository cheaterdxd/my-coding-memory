#include<stdio.h>
#include<string.h>
int main(){
	char plus='+';
	char equal='=';
	char s[500];
	int firstSticks,secondSticks,thirdSticks;
	scanf("%s",s);
	int size = strlen(s);
//	printf("%d",size);
	char newS[size];
	char *ret;
	ret = strrchr(s,plus);
	firstSticks = ret - s;
	secondSticks = strrchr(s,equal) -s - firstSticks -1;
	thirdSticks = size - firstSticks - secondSticks - 2;
//	printf("first: %d\nsecond: %d\nthird: %d\n",firstSticks,secondSticks,thirdSticks);
//	printf("%s",s);
	if((firstSticks+secondSticks)==thirdSticks){
		printf("%s",s);
		return 0;
	}
	else if((firstSticks+secondSticks+1)==(thirdSticks-1)){
		firstSticks +=1;
		thirdSticks -=1;
	}
	else if((firstSticks+secondSticks-1)==(thirdSticks+1)){
		if(firstSticks>1) firstSticks -=1;
		else{
			secondSticks -=1;
		}
		thirdSticks +=1;
	}
	else{
		printf("Impossible");
		return 0;	
	}
	for(int i=0;i<size;i++){
		if(i==firstSticks) newS[i]='+';
		else if(i==(secondSticks+firstSticks+1)) newS[i]='=';
		else newS[i]='|';
	}
	newS[size]='\0';
	printf("%s",newS);
	return 0;
}
