/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/20 12:30:41 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	di;
	size_t	si;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	di = dlen;
	si = 0;
	if (size <= dlen)
	{
		return (slen + size);
	}
	while (di + 1 < size && src[si] != 0)
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0';
	return (slen + dlen);
}
