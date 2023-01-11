/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:37:52 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/14 12:38:00 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_alphabet(void)
{
	char	letter;
	letter = 'a';
	write (1, &letter, 1);
	while (letter <= 'z')
	{
	letter++;
	}
	

}

int	main(void)
{
	ft_print_alphabet();
}

