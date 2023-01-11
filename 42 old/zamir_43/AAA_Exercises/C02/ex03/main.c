#include <stdio.h>
#include <string.h>
#include <unistd.h>



int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
printf("%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("asd48"));
	printf("\n%d", ft_str_is_numeric("58"));
    
}
