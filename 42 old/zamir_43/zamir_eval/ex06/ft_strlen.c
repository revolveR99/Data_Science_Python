/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:02:06 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/22 15:02:28 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	zamir;

	zamir = 0;
	while (str[zamir] != '\0')
	{
		zamir++;
	}
	return (zamir);
}
