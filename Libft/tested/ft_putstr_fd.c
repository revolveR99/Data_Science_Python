/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/20 12:18:21 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *s)
{
	size_t z;
	z = 0;
	while(s[z])
	{
		z++;
	}
	return(z);
}

void ft_putstr_fd(char *s, int fd)
{
	write(fd,s,ft_strlen(s));
}

int main()
{
	char z[] = "beybebeybe";
	ft_putstr_fd(z,1);
}
