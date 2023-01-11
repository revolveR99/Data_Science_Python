#include    <unistd.h>

// CHAR Versionu
int main(void)
{
   char     c;    // char c = 'z'; eyni sey
   c = 'Z';
   		
   char *ptr; //ptr evezine basqa seyde ola biler ozumuz qoyuruq x ad g her sey ola biler
   ptr = &c;
  *ptr = 'A';
  
   write(1, &c, 1);
   return(1);
}

// Int Versionu

int main()
{
	int age = 25;
	
	int *ptr;  // eynidir int *ptr = &age
	ptr = &age;
	*ptr = 31; 
	
	printf("Address : %p\n", ptr); 
	
	printf("Value: %d" , *ptr); 
	
	return 0; 
	
}
