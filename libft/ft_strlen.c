/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:52:35 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/12 15:34:27 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 size_t strlen(const char *s)
 {
	size_t i;

	i = 0;

	while(s[i])
	i++;
	return(i);
 }

 /*#include <stdio.h>
int	main(void)
{
	char	a[] = "hece";
	int	b;
	b = ft_strlen(a);
	printf("%d", b);
}*/