/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:43:44 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/15 13:58:14 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

// Sınırlayıcı değer olan n kadar inceler ve 2 string arasındaki
// ilk farklılıgın ascii farkını döndürür vesselam...

#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0')
		&& (s2[index] != '\0') && (index < n))
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}


/*int	main(void)
{
	char	*s1 = "hece";
	char	*s2 = "heca";
	printf("hece > heca : %s", ft_strncmp(s1, s2, 5) > 0 ? "true" : "false" );
}*/

int	main(void)
{
	char	*s1 = "bu\0bir";
	char	*s2 = "bu\0iki";
	printf("org : %d, mine : %d", strncmp(s1,s2,5), ft_strncmp(s1,s2,5));
}