/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:50:05 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/17 13:04:51 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include    <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rimaz;
	int	verdo;

	rimaz = *a / *b;
	verdo = *a % *b;
	*a = rimaz;
	*b = verdo;
}
