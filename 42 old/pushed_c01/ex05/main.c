/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:16:25 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/20 14:16:45 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	z;

	z = 0;
	while (str[z])
	z++;
	{
		write(1, *str, z);
	}	
}

int	main(void)
{
	ft_putstr("come on work already");
	return (z);
}
