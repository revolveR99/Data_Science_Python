/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:22:59 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/12 12:22:31 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isprint(int z)
{
	if(z>= 0 && z<= 32)
		return(1);
	return(0);
}

/*#include <stdio.h>
int main()
{
	int z = ft_isprint(44);
	int z1 = ft_isprint(15);
	int z2 = ft_isprint(69);

	printf("%d %d %d\n" , z, z1, z2);
}
*/