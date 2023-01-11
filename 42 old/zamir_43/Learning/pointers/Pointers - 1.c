#include <stdio.h>

int main()
{
	int age = 25;
	
	printf("%d", &age); // agein adresi
	
	int  *ptr = &age;
	
	printf("\n%p", ptr); // ptr adresi 
	
	return 0;
//ptr ve age adresi eyni olcaq cunki kopyalaib saxlayr
}
---------------------------------------------------------
int main()
{
	int age = 25;
	
	int *ptr= &age;
	
	printf("Address : %p\n", ptr); 		// ptrdaki saxlanilan adress eslinde agein adresidi
	
	printf("Value: %d" , *ptr); // ptr value is the value of the integer which adress is saved on ptr
	
	return 0;
}

---------------------------------------------------------

int main()
{
	int age = 25;
	
	int *ptr= &age;	
	
	*ptr = 31;
	
	printf("Address : %p\n", ptr); // ptrdaki saxlanilan adress eslinde agein adresidi
	
	printf("Value: %d" , *ptr); // value of the integer which's address saved on ptr will change to 31
	
	//ptr pointer points to the adress of age variable and we change the value of that variable
	
	return 0;
}


