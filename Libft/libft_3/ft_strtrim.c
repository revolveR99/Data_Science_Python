/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:15:23 by zero              #+#    #+#             */
/*   Updated: 2023/02/11 21:15:26 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c_inside_set(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	index;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while ((s1[start] != '\0') && (ft_c_inside_set(s1[start], set)))
		start++;
	while ((end > start) && (ft_c_inside_set(s1[end - 1], set)))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (start < end)
		str[index++] = s1[start++];
	str[index] = '\0';
	return (str);
}
