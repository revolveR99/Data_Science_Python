/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:50:47 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/12 11:16:57 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int z)
{
	if((z >= 'A' && z<='Z') || (z >= 'a' && z<='z') || (z >= '0' && z<='9'))
		return(1);
	return(0);
}

/*#include <stdio.h>
int main(void)
{
	int z1;
	int z2;
	int z3;
	int z4;

	z1 = ft_isalnum('A');
	z2 = ft_isalnum('s');
	z3 = ft_isalnum ('3');
	z4 = ft_isalnum('/');
	printf("%d %d %d %d\n", z1,z2,z3,z4);
}*/