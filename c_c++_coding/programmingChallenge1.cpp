#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int getChoice(){
	int choice;
	scanf("%d",&choice);
	return choice;
}
int menu(){
	printf("Wellcome to our programming challenge !\n");
	printf("1. Start the challenge!\n");
	printf("2. Oh no ,it's too difficult for you :))) You give up and exit this challenge.\n");
	printf("> ");
	getChoice();
}
int menu2(){
	printf("Don't trust <thang ra de> ,hacker must try anything, may be there is a better choice :)))\n");
	printf("1. Exit(real exit at this time or \"may be you want to try it?\" ).\n");
	printf("2. Finish the challenge and get flag.\n");
	printf("> ");
	getChoice();
}
int giaiPtBacHai(){
	float a,b,c,d;
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }
}
int easyStage(){
	
}
int base64encode(){
	
}
int difficultStage(){
	
}
void run(){
	int choice = menu();
	if(choice == 1) difficultStage();
	else if(choice == 2){
		choice = menu2();
		if(choice == 1){
			exit(0);
		}
		else if(choice == 2) easyStage();
	}
	else{
		printf("Wrong choice! Good bye,hacker!");
	}
	
}


int main(){
	run();
    return 0;
}
