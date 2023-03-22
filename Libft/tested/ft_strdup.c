/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:40:40 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:35:23 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


size_t ft_strlen(const char *s)
{
	size_t i = 0;
	
	while(s[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;
	
	i = 0;
	
	s = (char*)malloc(sizeof(char) * ft_strlen(str) + 1);
	if(!s)
		return(NULL);
	while(str[i] != '\0' )
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return(s);
}

int main()
{
	const char a[] = "zerox";
	const char b[] = "nenes";
	
	printf("org: %s\n me: %s\n",strdup(b), ft_strdup(a));
}
