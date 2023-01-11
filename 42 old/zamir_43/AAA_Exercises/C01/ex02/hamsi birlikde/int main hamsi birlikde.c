// Online C compiler to run C program online
#include <stdio.h>


  int main()
  {
      
     int c;
    
   
	
	int *a;
	int *b;
	
	   int x = 42;
	int y = 21;
	
	a = &x;
	b = &y;
    
    
  
      printf("Before a :%d b:%d\n", x , y);
         c = *a;
    *a = *b;
    *b = c;
      
      printf("Before a :%d b:%d", *a , *b);
  
     
      
  }
