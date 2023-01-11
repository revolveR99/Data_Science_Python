#include <stdio.h>
#include <string.h>
#include <unistd.h>



int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
printf("%d", ft_str_is_uppercase("WHATSup"));
	printf("\n%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("HELLO"));
    
}
