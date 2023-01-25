/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:35:24 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/25 17:46:16 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		iter;
	char	*ptr;

	iter = 0;
	ptr = 0;
	while (str[iter])
	{
		if (str[iter] == (unsigned char)c)
			ptr = ((char *)&str[iter]);
		iter++;
	}
	if (str[iter] == c)
		ptr = (char *)&str[iter];
	return (ptr);
}
