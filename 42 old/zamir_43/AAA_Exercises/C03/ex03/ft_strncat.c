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

char *ft_strncat(char *dest, char *src, unsigned int nb)       
{
	unsigned int	l;
	unsigned int	i;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0' && i < nb)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}        

int main(void)
{
char s1[] = "This";
	char s2[] = "Is";
	char s3[] = "This";
	char s4[] = "Is";
	printf("standard c function: %s ", strncat(s1, s2, 10));
	printf("\nft_strncat: %s ", ft_strncat(s3, s4, 10));
}




