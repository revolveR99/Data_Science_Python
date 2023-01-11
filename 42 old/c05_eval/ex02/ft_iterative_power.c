/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:51:14 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/29 19:51:33 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	numero;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	numero = nb;
	power--;
	while (power > 0)
	{
		numero = numero * nb;
		power--;
	}
	return (numero);
}
