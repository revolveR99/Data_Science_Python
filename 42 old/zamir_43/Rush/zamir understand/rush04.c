/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:46:23 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/16 13:00:54 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* rush(5,3) should display :

ABBBC
B   B
CBBBA

• rush(5, 1) should display:

ABBBC

• rush(1, 1) should display:

A

• rush(1, 5) should display:

A
B
B
B
C

• rush(4, 4) should display:

ABBC
B  B
B  B
CBBA
*/


#include <unistd.h>

void	ft_putchar(char c);

void	print_first_row(int x)
{       
        ft_putchar ('A');
        while (x >= 3)
        {
                ft_putchar('B');
                x--;
        }
        if (x != 1)
        {
                ft_putchar('C');
        }
        ft_putchar('\n');
}

void	print_middle_row(int x, int y)
{
        int     counter;

        counter = x;
        while (y >= 3)
        {
                ft_putchar('B');
                while (counter >= 2)
                {
                        if (x > 1)
                        {               
                                if (counter > 2)
                                {
                                        ft_putchar(' ');
                                }
                                if (counter == 2)
                                {
                                        ft_putchar('B');
                                }
                        }
                        counter--;                
                }       
                counter = x;
                ft_putchar('\n');
                y--;
        }
}    

void    print_last_row(int x, int y)
{
        if (y != 1)
        {
               ft_putchar('C');
               while (x >= 3)
               {
                      ft_putchar('B');
                      x--;
               }
               if (y != 1 && x != 1)
               {
                        ft_putchar('A');
               }
        }
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		print_first_row(x);
		print_middle_row(x, y);	
		print_last_row(x, y);
	}
}
