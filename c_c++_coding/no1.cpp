#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void int2binary(int number, char output[]){
	char binary[50]={0};
	char temp[50]={0};
	int soDu;
	int i = 0;
//	alarm(5);
	while(number!=0){
		soDu = number%2;
		number = number/2;
		temp[i]=soDu+48;
		i++;
	}
	int m = strlen(temp)-1;
	for(int j=0;m>=0;m--,j++){
		binary[j]=temp[m];
	}
	strcpy(output,binary);
}
int checkAnswer(int num1, int num2, char answer[]){
	int tong2So = num1 + num2;
	char ketqua[50];
	int2binary(tong2So,ketqua);
	if(strncmp(ketqua,answer,strlen(ketqua))==0) return 1;
	else return 0;
}
int main(){
//	printf("Can you add 2 binary number if we give you 2 decimal ?\n");
//	printf("May be you need to trans it to binary then add them. Right?\n");
//	int stage = 0;
//	int num1, num2;
//	char answer[50];
//	while(stage < 20){
//		srand(time(NULL));
//		num1 = rand()%100;
//		printf("Number 1: %d\n",num1);
//		num2 = rand()%100;
//		printf("Number 2: %d\n",num2);
//		printf("Your answer: ");
//		scanf("%s",answer);
//		if(checkAnswer(num1,num2,answer)==0){
//			printf("That's wrong !\n");
//			break;
//		}
//		stage++;
//	}
//	if(stage==20) printf("Your flag: MiniCTF{Ju41_4_S1mpl3_B1n4ry_M4th}");
//	else printf("Try again, bro!");
//	char a[10];
//	char b[10];
//	printf("nhap a: ");
//	scanf("%s",a);
//	printf("\nnhap b: ");
//	scanf("%s",b);
//	printf("\n--------Ket qua---------\n");
//	puts(a);
//	puts(b);
	int a = 10;
	puts("le thanh tuan %d");
	return 0;
}
