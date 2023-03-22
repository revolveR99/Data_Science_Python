/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:39:03 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/05 14:33:19 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_sizeofword(int n)
{
	unsigned int	size;

	size = 0;
	if (n < 0)
		size += 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*newstr;
	unsigned int	length;
	unsigned int	numbre;

	length = ft_sizeofword(n);
	newstr = (char *)malloc(sizeof(char) * (length + 1));
	if (newstr == NULL)
		return (NULL);
	if (n < 0)
	{
		newstr[0] = '-';
		numbre = -n;
	}
	else
		numbre = n;
	if (numbre == 0)
		newstr[0] = '0';
	newstr[length] = '\0';
	while (numbre > 0)
	{
		newstr[length - 1] = (numbre % 10) + '0';
		numbre = numbre / 10;
		length--;
	}
	return (newstr);
}
