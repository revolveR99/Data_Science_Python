// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>



int main()
{
      int a = 40;
   int b = 10;
    int * div;
    int *mod;
    
  int x = a / b;
    int y = a % b;
    
    printf(" a : %d b: %d\n", a , b);
  
 div = &x;
 mod = &y;
 
    printf(" a : %d b: %d", *div, *mod );
}
