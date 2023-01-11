// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}
int main()
{
    int  a;
    a = 6;
    
    int *nbr = &a;
    printf("Before : a : %d ", a);
    ft_ft(nbr);
    printf("After : a : %d ", a);
}
