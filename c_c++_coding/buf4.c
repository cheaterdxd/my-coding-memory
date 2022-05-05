#include<stdio.h>
#include<stdlib.h>
void init(){
    setbuf(stdin, 0);
    setbuf(stdout, 0);
    setbuf(stderr, 0);
}
int main(){
	init();
	printf("I want to sell my flag\n");
	printf("Do you want to buy it?\n");
	unsigned int yourMoney = 1000;
	int yourInput;
	printf("Your money is: %d\n",yourMoney);
	printf("Oh dear, you don't have enough money, right?\n");
	printf("You have one chance for borrow money? And it must smaller than 1000\n");
	printf("Input the number of money\n");
	printf("Input 0 to exit the challenge!\n");
	scanf("%d",&yourInput);
	if(yourInput==0){
		printf("You are loser !\n");
		return 0;
	}
	else{
		if(yourInput>1000){
			printf("This is my place, this is my rule, i said that it must smaller than 1000, You are out !\n");
			return 0;
		}
		yourMoney += yourInput;
	}
	printf("Now your money is %d\n",yourMoney);
	printf("Wanna buy flag? Input your choice(Y/N)_ \n");
	char choice[2];
	fflush(stdin);
	setbuf(stdin, 0);
	fgets(choice,2,stdin);
	if(strcmp(choice,"N")==0) return 0;
	else{
		if(yourMoney > 3000) printf("Your flag: miniCTF{1nt3ger_0v3rfl0w_s0_7un}");
		else printf("You don't have enough money, pleeeee :> \n");
	}
    return 0;
}
