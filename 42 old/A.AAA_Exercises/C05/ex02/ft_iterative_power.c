/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:56:13 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/26 09:56:15 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	numero;
	
	if (power < 0)
		return (0);

	else if (power == 0)
		return (1);
	
	nb = numero;
	
	while (power > 1)
	{
		nb = nb * numero;
		power--;
	}
	return (nb);
}
#include <stdio.h>
int main()
{
	int i;
	i = ft_iterative_power(2, 3);
	printf("%d", i);
	return 0;
}
