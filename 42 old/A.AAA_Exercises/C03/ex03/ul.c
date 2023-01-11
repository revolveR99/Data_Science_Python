/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ul.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:12:45 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/29 17:13:13 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;
    i = 0;
    j = 0;
    while (i < nb && dest[i] != '\0')
    {
        i++;
    }
    while (j < nb && src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    return (dest);
}

int main(void)
{
char s1[] = "This";
	char s2[] = "Is";
	char s3[] = "This";
	char s4[] = "Is";
	printf("standard c function: %s ", strncat(s1, s2, 2));
	printf("\nft_strncat: %s ", ft_strncat(s3, s4, 2));
}
