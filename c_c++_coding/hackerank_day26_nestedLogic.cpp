#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int expectDay=0;
    int expectMonth=0;
    int expectYear=0;
    int realDay=0;
    int realMonth=0;
    int realYear=0;
    scanf("%d",&realDay);
    scanf("%d",&realMonth);
    scanf("%d",&realYear);
    scanf("%d",&expectDay);
    scanf("%d",&expectMonth);
    scanf("%d",&expectYear);
    if(realYear>expectYear)
    {
        printf("10000\n");
    }
    else if(realYear==expectYear)
    {
        if((realMonth>expectMonth))
        {
            printf("%d",(500*(realMonth-expectMonth)));
        }
        else if(realDay>expectDay)
        {
            printf("%d",(15*(realDay-expectDay)));
        }
        else
        {
            printf("0");
        }
    }else{
    	printf("0");
	}
    return 0;
}

