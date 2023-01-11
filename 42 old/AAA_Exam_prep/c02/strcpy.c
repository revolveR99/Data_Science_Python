#include <unistd.h>
#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src)
{
	int	i = 0;
	while(src[i])	
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char  src [] ="Zamir";
	char	dest[] = "become";
	char	dest1[] = "Zamir";

	printf(" \n%s",ft_strcpy(dest,src));
	printf(" \n%s",strcpy(dest,src));

}

