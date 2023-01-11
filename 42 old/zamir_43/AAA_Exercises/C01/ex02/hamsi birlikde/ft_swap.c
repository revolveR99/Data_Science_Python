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

void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
    int x = 42;
	int y = 21;

	printf("before swap x: %d y: %d", x, y);
	ft_swap(&x, &y);
	printf("\nafter swap x: %d y: %d", x, y);
    
}
