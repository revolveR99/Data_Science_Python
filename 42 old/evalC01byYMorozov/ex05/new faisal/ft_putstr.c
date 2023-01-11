/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:56:45 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/22 14:57:02 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void	ft_putstr(char *str)
{
	int	z;

	z = 0;
	while (str[z])
		z++;

	write(1, str, z);
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	int	i;
	
	i = 0;
	i++;
	
	
}
