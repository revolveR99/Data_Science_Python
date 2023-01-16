/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:46 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/16 16:39:16 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Girilen char bir stringin sayı olan kısmını
// int bir değere dönüştürme işlemi yapar
// örnek vermek gerekirse eğer
// "     -213dsfıjsdf" olan stringimden int -213
// sonucunu alırım vesselam...

int	ft_atoi(const char *str)
{
	int	index;
	int	carp;
	int	result;

	index = 0;
	carp = 1;
	result = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		{
			carp *= -1;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index] != '\0')
	{
		result = ((str[index] - '0') + (result * 10));
		index++;
	}
	return (result * carp);
}
