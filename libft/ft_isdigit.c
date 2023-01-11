/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:32:34 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/11 17:44:39 by zabdulza         ###   ########.fr       */
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
	int c1;
	int c2;

	c1 = ft_isdigit('A');
	c2= ft_isdigit('5');

	printf("%d %d", c1 , c2);
}