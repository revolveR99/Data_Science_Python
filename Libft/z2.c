
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	strlen;
	char			*copy;
	char			*substr;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start + len < strlen)
		copy = (char *)malloc(len * sizeof(char) + 1);
	else if (start >= strlen)
		copy = (char *)malloc(1);
	else
		copy = (char *)malloc((strlen - start) * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	substr = copy;
	i = 0;
	if (start < strlen)
		while (s[start] != 0 && i < len)
			substr[i++] = s[start++];
	substr[i] = 0;
	return (copy);
}


int	main(void)
{
	char	str[] = "kemal hece";
	char	*ret = ft_substr(str, 3, 9);
	printf("%s -> %s", str, ret);
}
