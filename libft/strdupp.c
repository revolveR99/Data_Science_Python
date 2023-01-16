#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}


size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(const char *str)
{
	char	*new;
	
	new = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!new) // ==>> new==NULL
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(str) + 1);
	return (new);
}



int	main(void)
{
	char	*src = "bunu dupla";
	printf("%s -> %s\n", src, ft_strdup(src));
}