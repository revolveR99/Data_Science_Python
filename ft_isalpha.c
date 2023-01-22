/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:04:01 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/21 14:47:10 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int z)
{
	if ((z >= 'A' && z <= 'Z') || (z >= 'a' && z <= 'z'))
		return (1);
	return (0);
}
