/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:42:20 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/14 11:26:43 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{	
		b = '0';
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if (!(a == '9' && b == '9'))
				write(1, ", ", 2);
		b++;
		}
		a++;
	}
}
