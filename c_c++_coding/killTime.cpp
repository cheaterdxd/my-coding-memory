#include<stdio.h>
int getchoice(){
	int choice=0;
	printf("Do something:\n");
	printf("0. Exit.\n");
	printf("1. Learn something.\n");
	printf("2. Play something.\n");
	printf("Please choose your choice:")
	scanf("%d",&choice);
	if(choice<0 || choice>2) {
		printf("\nInvalid choice !. Good bye hacker!\n")
		exit(0);
	}
	return choice;
}
int learnSth(){
	int numOfSubject = 0;
	printf("\nHow many subject do you want to learn?\n");
	scanf("%d",&numOfSubject);
	for(int i=0; i<numOfSubject; i++){
		printf("Input subject %d:",i);
		scanf("%s",)
	}
}
int main(){
	
}
