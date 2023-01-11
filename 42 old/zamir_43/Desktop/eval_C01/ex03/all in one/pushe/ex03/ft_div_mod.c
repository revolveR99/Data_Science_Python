/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:50:05 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/17 13:04:51 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int division_res;    // 18-25 arasi qisa yazilisi 
	int	remainder_res;   //  	*div = a / b; 	*mod = a % b;
	
	division_res = a  b;
	*div = division_res;
	
	remainder_res = a % b;
	*mod = remainder_res;   
}



