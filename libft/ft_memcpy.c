/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:26:51 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/15 14:34:11 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// Dizinin türü farketmeksizin n kadar cpy işlemi yapmamı sağlar

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

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char		*ds1 = malloc(sizeof(char) * 5);
	char		*ds2 = malloc(sizeof(char) * 5);
	const char	*sr = "hece";
	printf("mine : %s, ", ft_memcpy(ds2, sr, 5));
	printf("org : %s, ", memcpy(ds1, sr, 5));
}*/