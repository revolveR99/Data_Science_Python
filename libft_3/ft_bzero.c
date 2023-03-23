/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:32:23 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/23 12:40:50 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)ptr;
	i = 0;
	while (n--)
	{		
		p[i] = 0;
		i++;
	}
}