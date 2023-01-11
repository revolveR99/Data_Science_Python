#include <stdio.h>
#include <string.h>
#include <unistd.h>



char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	    if (str[i] >=65 && str[i] <= 95)
		   { str[i]= str[i] + 32;
		}
		i++;
		}
        return(str);
}
int main(void)
{
   char lower[] = "TestingThisLovelyFunction";
	printf("%s", ft_strlowcase(lower));
    
}





