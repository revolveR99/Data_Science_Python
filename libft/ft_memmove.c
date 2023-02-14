/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:29:05 by zero              #+#    #+#             */
/*   Updated: 2023/02/02 21:18:38 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*str;
	char	*str2;

	str = (char *)dest;
	str2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (str2 < str)
		while (0 < len--)
			str[len] = str2[len];
	else
		return (ft_memcpy(dest, src, len));
	return (dest);
}
