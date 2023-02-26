/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/20 12:18:21 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *zam)
{
	size_t z;
	z = 0;
	while(zam[z])
	{
		z++;
	}
	return(z);
}

int main()
{
	char a[] = "cyeran";
	printf("%lu\n", ft_strlen(a));
	printf("%lu", strlen(a));
}
