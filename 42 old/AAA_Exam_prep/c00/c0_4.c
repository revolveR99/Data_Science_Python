#include <unistd.h>

void ft_is_negative(int n)
{
	while(n < 0)
	{
		write(1, "N", 1);
	}
	if(n >= 0)
	{
		write(1, "P", 1);
	}

}

int	main()
{
	ft_is_negative(0);
}
