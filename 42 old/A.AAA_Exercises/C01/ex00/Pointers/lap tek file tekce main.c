// Online C compiler to run C program online
#include <stdio.h>

// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

int main()
{
    int  a;
    a = 6;
    
    int *nbr = &a;
    
    printf("Before : a : %d ", a);
    *nbr = 42;
    printf("After : a : %d ", *nbr);
}
