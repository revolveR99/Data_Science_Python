/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LLft_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:39:29 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/12 13:33:45 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;

	while(s[i])
	i++;

	write(fd,s, i);
		
	
}

//learn

void ft_putstr(char *str)
{
	int i;

	i = 0;

	while(str[i])
	i++;
	
	write(fd,s, i);
		

}

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
