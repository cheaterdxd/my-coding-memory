#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void checkPrime(int n)
{
    for(int i=2;i<=sqrt((double)n);i++)
    {
        if(n%i==0) 
        {
            printf("Not prime\n");
            return;
        }
    }
    printf("Prime\n");
}

int main() {

    int numOfCase;
    scanf("%d",&numOfCase);
    int elements[numOfCase];
    for(int i = 0; i<numOfCase;i++)
    {
        scanf("%d",&elements[i]);
    }
    for(int j = 0; j<numOfCase;j++)
    {   
        if(elements[j]==1) printf("Not Prime\n");
        else checkPrime(elements[j]);
    }
    return 0;
}

