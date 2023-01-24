/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:26:51 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:09 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*str2;
	size_t	index;

	index = 0;
	str = (char *)dest;
	str2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (index < n)
	{
		str[index] = str2[index];
		index++;
	}
	return (dest);
}
