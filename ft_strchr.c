/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:06:56 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:22 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)&str[index]);
		index++;
	}
	return (0);
}
