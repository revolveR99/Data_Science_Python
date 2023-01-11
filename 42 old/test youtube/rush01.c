/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:59:23 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/15 17:49:16 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_char_n_times(int nn, char bb)
{
		while (nn > 0)
		{
			ft_putchar(bb);
			nn--;
		}	
}
void	print_middle_rows(int leng)
{
		ft_putchar('B');
		if (leng == 2)
		{
			ft_putchar('B');
		}
		else if (leng >= 3)
		{
			print_char_n_times(leng - 2, ' ');
			ft_putchar('B');
		}
		ft_putchar('\n');
}
void	print_first_rows(int lengb)
{
		ft_putchar('A');
		if (lengb == 2)
		{
			ft_putchar('B');
		}
		else if (lengb >= 3)
		{
			print_char_n_times(lengb - 2, 'B');
			ft_putchar('C');
		}
		ft_putchar('\n');
}
void	print_last_rows(int lenglr,int deeplr)
{
		if deeplr >= 3	
		{
			ft_putchar('C');
			if (lenglr == 2)
			{
				ft_putchar('B');
			}
			else if (lenglr >= 3)
			{
				print_char_n_times(lengb - 2, 'B');
				ft_putchar('A');
			}
			ft_putchar('\n');
		}	
void	rush(int i,int j)
{
		int		kk;

		if ((i * j <= 0) || (i <= 0) || (i > 2147453647) || (j > 2147483647))
		{
			write(1, "Error! Expected input is 2 integer numbers >= 1", 48);
		}
		else
		{
			kk = j;
			print_first_rows(i);
			if (j == 2)
			{
				print_middle_rows(i);
			}
			else if (j >= 3)
			{	
			while (kk-- >2)
			{
				print_middle_rows(i);
			}
			
			}
		}
		
		

}

}
		


}
