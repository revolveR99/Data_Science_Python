/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/06 19:14:50 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	deindex;
	size_t	slen_fromstrlcpy;

	deindex = 0;
	while (deindex < size && *dest)
	{
		deindex++;
		dest++;
	}
	slen_fromstrlcpy = ft_strlcpy(dest, src, size - deindex);
	return (slen_fromstrlcpy + deindex);
}
