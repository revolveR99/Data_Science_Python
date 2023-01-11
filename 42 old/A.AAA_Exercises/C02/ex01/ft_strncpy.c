#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{char src[] = "Hello";
	char dest[] = "World";
	char dest1[] = "World";
	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest1, src, 2));}
