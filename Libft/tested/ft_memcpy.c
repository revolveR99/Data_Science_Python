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

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i = 0;
	
	if(!dest || !src)
		return(NULL);
	
	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	
	
	while(n--)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}

int main()
{
	char a[] = "1";
	char b[] = "2";
	char d[] = "1";
	char c[] = "2";
	printf("value: %s",(char *)ft_memcpy(a,b,2));
	printf("value: %s",(char *)memcpy(d,c,2));
}
