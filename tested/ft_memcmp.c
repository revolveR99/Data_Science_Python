/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:43:33 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/21 15:45:03 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	unsigned char *ss1;
	unsigned char *ss2;
	
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	
	while(n--)
	{
		if(ss1[i] != ss2[i])
			return(ss1[i] - ss2[i]);
		i++;
	}
	return(0);
}


int	main(void)
{
	char	*p1 = "sample";
	char	*p2 = "semple";
	int	d1[] = {4, 3, 2, 1};
	int	d2[] = {4, 3, 3, 1};
	printf("org : %d, mine : %d", memcmp(p1,p2,6), ft_memcmp(p1,p2,6));
	printf("org : %d, mine : %d", memcmp(d1,d2,16), ft_memcmp(d1,d2,16));
}

/*int main () {
char str1[15] = "abcdef";
char str2[15] = "ABCDEF";
int result;

result = ft_memcmp(str1, str2, 5);
 if(result > 0) 
 {
printf("str2 is less than str1");
}
 else if(result < 0) 
 {
printf("str1 is less than str2");
} 
else
 {
 printf("str1 is equal to str2");
 }
return(0);
 }*/
