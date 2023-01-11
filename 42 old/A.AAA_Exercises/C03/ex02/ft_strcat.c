/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:51:04 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/23 10:51:10 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	
	int	l;
	int	i;
	
	i = 0;
	l = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		dest[l + i] = src[i]; // l+i means we make place for src in dest , when dst is Hello and src is hey
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

int	main(void)
{
char s1[] = "Very";
	char s2[] = "Funny";
	char s3[] = "Very";
	char s4[] = "Funny";
	printf("standard c function: %s ", strcat(s1, s2));
	printf("\nft_strcat: %s ", ft_strcat(s3, s4));
}



