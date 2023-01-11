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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j]) // berberdir to find[j] == '\0'
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}


int main(void)
{
	char s1[] = "Thisis";
	char s2[] = "s";
	printf("my: %s ", ft_strstr(s1, s2));
	printf("standard c function: %s ", strstr(s1, s2));
}




