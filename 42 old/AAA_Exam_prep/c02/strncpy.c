#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;
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
	char src[] = "Zamir";
	char dest[] = "Become";
	char dest1[] = "Rimaz";

	printf("%s\n",ft_strncpy(dest,src, 2) );
	printf("%s",strncpy(dest,src, 2) );
}
