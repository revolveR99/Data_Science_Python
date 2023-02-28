/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:06:56 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/28 10:14:40 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
	{
		s++;
	}
	return ((char *) s);
}

int main()
{
	char a[] = "am\0a";
	int b = 'a';
	printf("org: %s me: %s", strchr(a,b),ft_strchr(a,b));
}
