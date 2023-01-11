/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:31:57 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/29 10:31:59 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h> 
#include	<stdio.h> 
int ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

int	 main()
{
	printf("a: %d",ft_strlen("gel gel ceyranim gelfffffffffffffffffffffffffffffffff"));
}
