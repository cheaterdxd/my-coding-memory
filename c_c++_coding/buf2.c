#include<stdio.h>
#include<sys/cdefs.h>
void init(){
    setbuf(stdin, 0);
    setbuf(stdout, 0);
    setbuf(stderr, 0);
}
int main(){
	init();
	char input[20];
	int check1;
	int check2;
	printf("Enter your name to start the challenge: ");
	gets(input);
	if(check1 == 123){
		printf("Oh dear, you are so good ! Keep going bro !\n");
		if(check2 == 456) system("cat /home/buf2/flag.txt");
		else printf("Its very close to the goal. Try harder!\n");
	}
	else printf("No hope for you.\n");
	return 0;
}
