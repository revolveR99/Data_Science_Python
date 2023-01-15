/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:43:33 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/15 13:58:28 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Tıpkı strncmp gibi tepki verir lakin tek farkı stringin türü önemsizdir
// vesselam...

/*strncmp() will stop comparing characters when it reaches a nullterm
character in either string or when the limit/count is reached. memcmp()
is blind to nullterm characters.

At first glance, this seems to be the same, but given two strings:

"abc\0efg\0"
"abc\0fgh\0"

Then strncmp(,,6) will say they're equal, memcmp(,,6) will not.*/
#include <stdio.h>
#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	index;

	index = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((str1[index] == str2[index]) && (str1[index] != '\0')
		&& (str2[index] != '\0') && (index < n))
		index++;
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}


int	main(void)
{
	char	*p1 = "bu\0bir";
	char	*p2 = "bu\0iki";
	printf("org : %d, mine : %d", memcmp(p1,p2,5), ft_memcmp(p1,p2,5));
}