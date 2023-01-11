#include <stdio.h>
#include <string.h>
#include <unistd.h>



char *ft_strupcase(char *str)
{
	int a;
	a	= 0;
	while(str[a])
	{
		if(str[a] >= 'a' && str[a] <= 'z')
		{
				str[a] -= 32;


		}
		a++;
		}
		return(str);
}		
int	main()
{
	char up[] = "Zamir gel ye";
	printf(" %s", ft_strupcase(up));
}









