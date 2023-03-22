/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:54:03 by zero              #+#    #+#             */
/*   Updated: 2023/02/01 18:54:09 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i = 0 ;
	unsigned char	*s_1;
	unsigned char	*s_2;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	
	while(n--)
	{
		if(s1[i] != s2[i] ||!s1[i] ||!s2[i])
			return(s_1[i] - s_2[i]);
		i++;
	}
	return(0);
}

int main()
{
	char a[] = "zamir";
	char b[] = "rimaz";
	char c[] = "zamir";
	char d[] = "rimaz";
	printf("org: %d\n me: %d\n", strncmp(a,b,90),ft_strncmp(c,d,90));
}
