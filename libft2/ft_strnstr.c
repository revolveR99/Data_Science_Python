/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:31 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:44 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i1;
	size_t	i2;

	if (!*to_find)
		return ((char *)str);
	i1 = 0;
	while (str[i1] != '\0' && (size_t)i1 < len)
	{
		if (str[i1] == to_find[0])
		{
			i2 = 0;
			while (str[i1 + i2] == to_find[i2] && i1 + i2 < len)
			{
				if (to_find[i2 + 1] == '\0')
					return ((char *)&str[i1]);
				i2++;
			}
		}
		i1++;
	}
	return (0);
}
