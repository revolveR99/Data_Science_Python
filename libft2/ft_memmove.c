/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:29:05 by zero              #+#    #+#             */
/*   Updated: 2023/01/23 19:29:33 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*str;
	char	*str2;
	size_t	iter;

	iter = 0;
	str = (char *)dest;
	str2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (str2 < str)
		while (++iter <= len)
			str[len - iter] = str2[len - iter];
	else
		return (ft_memcpy(dest, src, len));
	return (dest);
}
