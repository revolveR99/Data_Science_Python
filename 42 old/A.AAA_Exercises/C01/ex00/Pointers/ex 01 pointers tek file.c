#include    <stdio.h>
 

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*	void	ft_ft(int *nbr); ----- 	iki fayl ayrsan bunuda qoymalisan*/ 

int		main(void)
{
	int a = 21;
	int *nbr;	
	nbr = &a;
	
	printf("Before (21): %d\n", a);
	ft_ft(nbr);
	printf("After  (42): %d\n", a);
}

