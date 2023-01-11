#include <stdio.h>

int main()
{
	int age = 25;
	
	printf("%d", &age); // agein adresi
	
	int* ptr = &age;
	
	printf("\n%p", ptr); // ptr adresi 
	
	return 0;

}

//ptr ve age adresi eyni olcaq cunki kopyalaib saxlayr ptr icinde

