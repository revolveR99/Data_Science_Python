
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(*src));
	
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}


int		main(void)
{
	printf("%s\n", ft_strdup("Hello world!"));
	return (0);
}

