#include <unistd.h>

void ft_print_alphabet(void)
{
	char alp = 'z';
	while(alp >= 'a')
	{
		write(1, &alp, 1);
		alp--;
	}
}

int	main()
{
	ft_print_alphabet();
}





/*
int	main()
{
	char alp;
	alp = 'a';
	while (alp <= 'z')
	{
		write(1, &alp, 1);
		alp++;
	}
}

*/
