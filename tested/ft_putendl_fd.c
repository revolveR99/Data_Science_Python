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
#include <stdio.h>
#include <string.h>
#include <unistd.h>
void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}
size_t ft_strlen(const char *s)
{
	size_t z = 0;
	while(s[z])
	{
		z++;
	}
	return(z);
}
void ft_putstr(char *s, int fd)
{
	write(fd,s,ft_strlen(s));
}
void ft_putendl_fd(char *s, int fd)
{
	if(s)
	{
	ft_putstr(s,fd);
	ft_putchar_fd('\n',fd);
	}
}

int main()
{
	char z[] = "zamir";
	ft_putendl_fd(z,2);
}
