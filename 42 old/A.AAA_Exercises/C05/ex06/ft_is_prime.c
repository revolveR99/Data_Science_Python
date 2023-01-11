/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:38:42 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/26 11:38:43 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (nb % i != 0)
	{
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}


#include <stdio.h>
int main()
{
	int i;
	i = ft_is_prime(3);
	printf("I: %d\n", i);
}
