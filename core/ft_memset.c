/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:37:51 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:11 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t bytelenght)
{
	char	*str;
	size_t	index;

	index = 0;
	str = (char *)ptr;
	while (index < bytelenght)
	{
		str[index] = value;
		index++;
	}
	return (ptr);
}