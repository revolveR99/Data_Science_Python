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
	int	division_res;
	int	remainder_res;
	division_res = (*a) / (*b);
	remainder_res = (*a) % (*b);
	*a = division_res;
	*b = remainder_res;
}

int main(void)
{
    int x = 4, y = 2;
	int *a = &x, *b = &y;
	printf("before: x: %d y: %d", x, y);
	ft_ultimate_div_mod(a, b);
	printf("\nafter: x: %d y: %d", *a, *b);
}
