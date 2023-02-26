/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:42:39 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/21 17:41:32 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch2;

	s = (unsigned char *)str;
	ch2 = (unsigned char)c;
	while (n--)
	{
		if (*s == ch2)
			return ((void *)s);
		s++;
	}
	return (0);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (0);
}*/


int	main(void)
{
    char	p[] = "sample";
    char	b = 'a';
    printf("org: %s, mine: %s\n", (char*)memchr(p, b, 6), (char*)ft_memchr(p, b, 6));
    return (0);
}

