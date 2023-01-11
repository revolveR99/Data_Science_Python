/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:04:51 by mnurlybe          #+#    #+#             */
/*   Updated: 2022/10/15 16:05:56 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	print_character(char c)
{
	write(1, &c, 1);
}

void	print_space(int x)
{
	if (x != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{	
		y = x + 1;
		while (y <= 99)
		{
			print_character(x / 10 + '0');
			print_character(x % 10 + '0');
			write(1, " ", 1);
			print_character(y / 10 + '0');
			print_character(y % 10 + '0');
			print_space(x);
			y++;
		}
		x++;
	}
}
