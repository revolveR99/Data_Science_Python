/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:50 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dindex;
	size_t	sindex;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dindex = ft_strlen(dest);
	sindex = 0;
	while (src[sindex] != '\0' && dindex + 1 < size)
	{
		dest[dindex] = src[sindex];
		dindex++;
		sindex++;
	}
	dest[dindex] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[sindex]));
}
