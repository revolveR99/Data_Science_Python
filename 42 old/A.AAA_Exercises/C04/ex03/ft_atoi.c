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
        sign = 1;// cunki x1 hecneyi deyismir ama x0 herseyi sifir edecek
        while (str[i] <= ' ') // skipping the spaces
                i++;
        while (str[i] == '-' || str[i] == '+') //dealing with - or +
        {
                if (str[i] == '+') //musbetdise davam
                        i++;
                else
                {
                        sign = sign * -1;
                        i++;
                }
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                res = res * 10 + (str[i] - '0');//characterleri integerlere cevirmek eger digitdilerse  for ex/ 53 '5' - 48 '0' = 5
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
