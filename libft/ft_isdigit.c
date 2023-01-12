/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:32:34 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/12 11:01:40 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.c"

int ft_isdigit (int z)
{
	if(z>='0' && z<='9')
		return(1);
	return(0);
}

#include <stdio.h>

int main()
{
	int z1;
	int z2;

	z1 = ft_isdigit('A');
	z2= ft_isdigit('5');

	printf("%d %d", z1 , z2);
}