/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:31 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/26 14:52:38 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (haystack[h] && h < len)
	{
		n = 0;
		while (needle[n] && haystack[h + n] == needle[n] && h + n < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)&haystack[h]);
		h++;
	}
	return (NULL);
}
