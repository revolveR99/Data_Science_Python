/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:02:37 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/12 11:22:28 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int ft_isascii(int z)
{
if(z>= 0 && z<= 127)
	return(1);
return(0);
}

/*
#include <stdio.h>
int main()
{
	int z;
	z = ft_isascii(6766767676);
	int z1;
	z1 = ft_isascii('£');
	int z2 ;
	z2= ft_isascii('t');

	printf("%d %d %d\n", z , z1, z2);
}
*/