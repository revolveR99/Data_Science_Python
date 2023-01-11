#include <unistd.h>
void	ft_putstr(char *str)
{
	int	z;

	z = 0;
	while (*str)
	
	{	
	
	write(1, str, 1);
	str++;
	}
	
}

int	main(void)
{
	ft_putstr ("Hey");
	return (0);
}
