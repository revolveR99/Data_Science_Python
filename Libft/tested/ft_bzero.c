/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:32:23 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:48:40 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *ptr, size_t n)
{
	char *p;
	size_t i;
	p = (char*)ptr;
	i = 0;
	
	while(n--)
	{
		
		p[i] = 0;
		i++;
	}
}

void	ft_putstr(char *str, int len)
{
	int	count;
	count = 0;
	while (count < len)
	{
		write(1, &str[count], 1);
		count++;
	}
}
int	main(void)
{
	char	a[] = "hece\n";
	char	mete[] = "hece\n";
	ft_putstr(a, 5);
	ft_bzero(mete, 3);
	ft_putstr(mete, 5);
}
