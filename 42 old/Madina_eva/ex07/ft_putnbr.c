/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:50:32 by mnurlybe          #+#    #+#             */
/*   Updated: 2022/10/16 14:09:40 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

int	calculate_ten(int len)
{
	int	ten;

	ten = 1;
	while (len != 0)
	{
		ten = ten * 10;
		len--;
	}
	return (ten);
}

void	print_number(int nb)
{
	int	counter;
	int	nb_copy;
	int	len;

	nb_copy = nb;
	counter = 0;
	while (nb_copy != 0)
	{
		counter++;
		nb_copy = nb_copy / 10;
	}
	len = counter - 1;
	while (nb != 0)
	{
		write_char(nb / calculate_ten(len) + '0');
		nb = nb % (calculate_ten(len));
		len --;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
	}
	if (nb == 0)
	{
		c = '0';
		write(1, &c, 1);
	}
	if (nb > 0)
	{
		print_number(nb);
	}
	if (nb < 0 && nb != -2147483648)
	{
		nb = nb * -1;
		write(1, "-", 1);
		print_number(nb);
	}
}
