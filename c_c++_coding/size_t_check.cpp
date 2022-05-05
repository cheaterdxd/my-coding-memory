#include<stdio.h>
#include<stdlib.h>
#define SIZE_SZ sizeof(size_t)
#define MALLOC_ALIGNMENT (2 * SIZE_SZ < __alignof__ (long double) ? __alignof__ (long double) : 2 * SIZE_SZ)
int main()
{
	printf("size_t: %d\n",sizeof(size_t));
	printf("malloc_alignment: %d\n",sizeof(MALLOC_ALIGNMENT));
	return 0;
}
