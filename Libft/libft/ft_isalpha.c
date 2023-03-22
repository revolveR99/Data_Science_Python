/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:04:01 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/18 17:41:07 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int zam)
{
	if ((zam >= 'A' && zam <= 'Z') || (zam >= 'a' && zam <= 'z'))
		return (1);
	return (0);
}
