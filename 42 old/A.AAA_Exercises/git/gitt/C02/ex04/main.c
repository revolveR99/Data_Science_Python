#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		   i++;
		else
		   return (0);

	}
	return (1);
}

int main(void)
{
printf("%d", ft_str_is_lowercase("whatsUP"));
printf("\n%d", ft_str_is_lowercase(""));
printf("\n%d", ft_str_is_lowercase("hello"));
    
}
