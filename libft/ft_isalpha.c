/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:04:01 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/11 17:36:32 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int z)
{
	if((z >= 'A' && z<='Z') || (z >= 'a' && z<='z'))
		return (1);
	return(0);
}


/*#include <stdio.h>
int	main(void)
{
	int	digit;
	int	digit2;
	digit = ft_isalpha(97);
	digit2 = ft_isalpha(96);
	printf("%d %d", digit, digit2);
}*/