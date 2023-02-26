/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:29:05 by zero              #+#    #+#             */
/*   Updated: 2023/02/22 15:15:02 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char 	*d;
	char *s;
	size_t i = 0;
	
	d = (char*) dest;
	s = (char*) src;
	
	if(!src && !dest)
		return(NULL);
	if(s < d)
	{
		while(len--)
		{
			d[len] = s[len];	
		}	
	}
	else{
		while(len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return(dest);
}

int main()

{
	char a[] = "zamir";
	char b[] = "rimaz";
	printf("value: %s", (char*) ft_memmove(a,b,5));
}
