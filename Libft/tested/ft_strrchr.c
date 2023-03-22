/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:35:24 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/01 19:07:08 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(const char  *s)
{
	int i = 0;
	while(s[i])
		i++;
	return(i);
	
}

char	*ft_strrchr(const char *s, int c)
{
    int z = ft_strlen(s);
    while (z >= 0)
    {
        if (s[z] == c)
            return (char *)(s + z);
        z--;
    }
    return (NULL);
}




int main()
{
	char a[] = "amaoepwea";
	int b = 'a';
	printf("org: %s me: %s", strrchr(a,b),ft_strrchr(a,b));
}
