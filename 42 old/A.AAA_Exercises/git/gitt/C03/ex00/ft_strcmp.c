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

int	ft_strcmp(char*s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}	

int	main()
{

char s1[] = "firs";
	char s2[] = "first";
	printf("standard c function: %d ", strcmp(s1, s2));
	printf("ft_strcmp: %d ", ft_strcmp(s1, s2));

}





