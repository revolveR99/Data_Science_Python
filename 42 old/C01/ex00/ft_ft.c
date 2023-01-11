/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:50:05 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/29 14:32:24 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
void ft_ft(int *nbr)
{
    int     a;
    a = 21;
    int     *nbr;
    nbr = &a;
    *nbr = 42;
    write(1, &nbr, 1);
    return (1);


}


#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}



int		main(void)
{
	int a;
	int *nbr;

	a = 21;
	nbr = &a;
	printf("Before (21): %d\n", a);
	ft_ft(nbr);
	printf("After (42): %d\n", a);
}