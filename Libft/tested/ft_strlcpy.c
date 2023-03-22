/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:27:02 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/20 14:42:26 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t (i) = 0;
	if(size > 0)
	{
		while(i < size + 1 && src[i] != '\0')
		{
			dest[i] = src[i] ;
			i++;		
		}
		dest[i] = '\0';
	}
	while(src[i] != '\0')
	{
		i++;
	}
return(i);
}
int	main()
{	
	char a[] = "zamir";
	char b[] = "nenes";
	printf("return %zu --> %s", ft_strlcpy(a,b,10),a);
}
