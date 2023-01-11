/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:48:44 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/31 16:48:51 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_number(int number)
{
	if(number >9)
	ft_number(number/10);
	write(1, &"0123456789"[number%10],1);
}

int main(void)
{
	int number;
	number = 1;
	while(number <= 100)
	{
		if(number%3 == 0 && number%5 == 0)
		write(1,"fizzbuzz",8);
		if else(number%3 == 0 )
		write(1,"fizz",4);
		if(number%5 == 0 )
		write(1,"buzz",4);
		else
			ft_number(number);
		
	write(1,"\n",1);
	number++;
		
		
		
	}
	return(0);
}
