#include    <unistd.h>
#include <stdio.h>


int main(void)
{
    int x = 40;
    int y = 10;
    
   int *a = &x;
    int *b = &y;
    
    printf("before: div: %d mod: %d \n",x, y);
    int div = (*a) / (*b);
	int mod = (*a) % (*b);
	
	*a = div;
	*b = mod;
	printf("after: div: %d mod: %d ", *a, *b);
}
