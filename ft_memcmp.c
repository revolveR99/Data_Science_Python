/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:43:33 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:08 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	index;

	index = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((str1[index] == str2[index]) && (str1[index] != '\0')
		&& (str2[index] != '\0') && (index < n))
		index++;
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}
