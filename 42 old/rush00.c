/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khlavaty <khlavaty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:21:04 by mkajstur          #+#    #+#             */
/*   Updated: 2022/10/15 19:12:11 by khlavaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_row(int x)
{
	ft_putchar('o');
	while (x >= 3)
	{
		ft_putchar('-');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_middle_row(int x, int y)
{
	int	counter;

	counter = x;
	while (y >= 3)
	{
		ft_putchar('|');
		while (counter >= 2)
		{
			if (counter > 2)
			{
				ft_putchar(' ');
			}
			if (counter == 2)
			{
				ft_putchar('|');
			}
				counter--;
		}
		counter = x;
		ft_putchar('\n');
		y--;
	}
}

void	print_last_row(int x, int y)
{
	if (y != 1)
	{
		ft_putchar('o');
		while (x >= 3)
		{
			ft_putchar('-');
			x--;
		}
		if (y != 1 && x != 1)
		{
			ft_putchar('o');
		}
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		print_first_row(x);
		print_middle_row(x, y);
		print_last_row(x, y);
	}
}
