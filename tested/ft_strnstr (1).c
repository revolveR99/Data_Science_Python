/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr (1).c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:31 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/26 14:27:03 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack) || len < ft_strlen(needle))
		return (0);
	i = len - ft_strlen(needle) + 1;
	while (i-- && *haystack)
	{
		h = (char *)haystack;
		n = (char *)needle;
		while (*n && *n == *h)
		{
			++h;
			++n;
		}
		if (!*n)
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}


int	main(void)
{
	char	*h = "hece is beatiful";
	char	*n = "is";
	printf("%s", ft_strnstr(h, n, 9));
}
