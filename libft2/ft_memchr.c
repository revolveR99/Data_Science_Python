/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:42:39 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 15:10:22 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)str;
	while (index < n)
	{
		if ((unsigned char)string[index] == (unsigned char)c)
			return ((void *)&string[index]);
		index++;
	}
	return (0);
}
