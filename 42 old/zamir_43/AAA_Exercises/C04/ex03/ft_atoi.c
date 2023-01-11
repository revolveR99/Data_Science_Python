/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:49:57 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/24 20:50:02 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_atoi(char *str)
{
        int     i;
        int     res;
        int     sign;

        i = 0;
        res = 0;
        sign = 1;
        while (str[i] <= ' ') // skipping the spaces
                i++;
        while (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '+')
                        i++;
                else
                {
                        sign = sign * -1;
                        i++;
                }
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                res = res * 10 + (str[i] - '0');
                i++;
        }
        return (res * sign);
}

#include <stdio.h>
int	main()
{
	int	n;
	n = ft_atoi("");//-12066
	printf("%d", n);
	}
