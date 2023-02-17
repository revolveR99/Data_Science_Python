//#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

size_t	word_count(const char *s, char c)
{
	int (index) = 0;
	int (count) = 0;
	int (trigger) = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && trigger == 0)
		{
				trigger = 1;
				count++;
		}
		else if (s[index] == c)
				trigger = 0;
		index++;
	}
	return (count);
}
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


char	*ft_strcreate(const char *s, char c, size_t counter)
{
	size_t (len) = 0;
	size_t (tmp) = counter;
	while (s[tmp] != c && s[tmp] != '\0')
	{
		tmp++;
		len++;
	}
	return (ft_substr(s, counter, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	counter;
	size_t	iter;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	counter = 0;
	iter = 0;
	while (s[counter] != '\0')
	{
		while (s[counter] == c && s[counter] != '\0')
			counter++;
		if (s[counter] != '\0')
		{
			res[iter] = ft_strcreate(s, c, counter);
			iter++;
		}
		while (s[counter] != c && s[counter] != '\0')
			counter++;
	}
	res[iter] = 0;
	return (res);
}

int    main(void)
{
    char    a[] = "hece.hece.hece";
    char    **res;
    int        iter;
    iter = 0;
    res = ft_split(a, '.');
    while (res[iter])
    {
        printf("%s ", res[iter]);
        iter++;
    }
    return (0);
}
