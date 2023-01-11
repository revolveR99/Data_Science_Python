/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khlavaty <khlavaty@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:21:04 by mkajstur          #+#    #+#             */
/*   Updated: 2022/10/15 19:09:57 by khlavaty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// PRINTING CHARS
void    ft_putchar(int x, char c1, char c2, char c3)
{
    int letter;
    letter = 1;
    while (letter <= x)
    {
        if (letter == 1)
        {
             write(1, &c1, 1);
        }
        else if (letter == x)
        {
            write(1, &c3, 1);
        }
        else
        {
            write(1, &c2, 1);
        }
        letter++;
    }
}
// FUNCTION TO PRINT
void	rush(int x, int y)
{
    int line;
    line = 1;
    while (line <= y)
    {
       if (line == 1)
       {
           ft_putchar(x, 'A', 'B', 'C');
       }
       else if (line == y)
       {
           ft_putchar(x, 'A', 'B', 'C');
       }
       else
       {
           ft_putchar(x, 'B', ' ', 'B');
       }
       write(1, "\n", 2);
       line++;
    }
}
// TESTING
int     main(void)
{
	rush(1, 4);
	return (0);
}
