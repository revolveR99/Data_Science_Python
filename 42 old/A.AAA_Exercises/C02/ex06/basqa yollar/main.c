#include <stdio.h>
#include <string.h>
#include <unistd.h>



int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	    if (32 <= str[i] && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
printf("%d", ft_str_is_printable("¶something wrong¶"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("thisshouldwork"));
    
}





