#include <unistd.h>
#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	int	a;
	a = 0;
	while(str[a])
	{
		if((str[a] >= 'a' && str[a] <= 'z' ) || (str[a] >= 'A' && str[a] <= 'Z' ))
		{
			a++;
		}
		else return(0);
	}
	return(1);
}

int	main()
{
	printf(" :%d\n", ft_str_is_alpha("Zamir"));
	printf(" :%d\n", ft_str_is_alpha("Beybe!?"));
	printf(" :%d", ft_str_is_alpha(""));
}
