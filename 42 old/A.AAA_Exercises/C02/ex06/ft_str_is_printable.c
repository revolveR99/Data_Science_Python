#include <stdio.h>
#include <string.h>
#include <unistd.h>



int	ft_str_is_printable(char *str)
{
	while(*str)
	{
	    if (*str < 32 || *str == 127)	
			return (0);
			str++;
	}
	return (1);
}

int main(void)
{
printf("%d", ft_str_is_printable("¶something wrong¶"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("thisshouldwork"));
    
}





