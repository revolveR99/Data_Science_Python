/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:46:56 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/23 12:34:06 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 

void	*ft_calloc(size_t array, size_t size)
{
	void	*mem;
	size_t	msize;
	char	*p;	

	if (array == 0 || size == 0)
	{
		array = 1;
		msize = 1;
	}
	msize = array * size;
	mem = malloc(msize);
	if (!mem)
		return (NULL);
	p = mem;
	while (msize--)
	{
		*p++ = 0;
	}
	return (mem);
}


int	main()
{
	int *ptr;
	int *ft_p;
	int i;
	int j;
	ft_p = (int *)ft_calloc(2, sizeof(int));
	ptr = (int *)calloc(2, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("org_addres:%p | org_value:%i\n", (ptr + i), *(ptr + i));
		i++;
	}
	j = 0;
	while (j < 5)
	{
		printf("ft_addres:%p | ft_value:%i\n", (ft_p + j), *(ft_p + j));
		j++;
	}
}
