/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:18:23 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/25 17:27:22 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
