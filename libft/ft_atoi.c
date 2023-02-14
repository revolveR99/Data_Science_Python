/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:46 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/02 13:51:53 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signchange;
	int	outcome;

	signchange = 1;
	i = 0;
	outcome = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == ' ' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signchange = signchange * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		outcome = ((str[i] - '0') + (outcome * 10));
		i++;
	}
	return (outcome * signchange);
}
