/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:18:23 by zabdulza          #+#    #+#             */
/*   Updated: 2023/03/04 13:23:17 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_searcherer(char const *s, char c)
{
	int (searcher) = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			searcher++;
			s++;
		}
	}
	return (searcher);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	lenght;

	if (!s)
		return (0);
	i = 0;
	result = malloc(sizeof(char *) * (ft_word_searcherer(s, c) + 1));
	if (!result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			lenght = 0;
			while (*s && *s != c && ++lenght)
				++s;
			result[i++] = ft_substr(s - lenght, 0, lenght);
		}
		else
			++s;
	}
	result[i] = 0;
	return (result);
}
