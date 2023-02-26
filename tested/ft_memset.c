/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2023/02/20 12:18:21 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
/* Outputs the string s to the file descriptor fd followed by a
** ’\n’.
** Param. #1 The string to output.
** Param. #2 The file descriptor.
** Return value None.
** Libc functions write(2).
**
**
** This function writes the string s to the file descriptor fd followed by a
** '\n' to make a new line.
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
void *ft_memset(void *s, int c, size_t n)
{
	char *string;
	size_t index;
	index = 0;
	
	string = (char *)s;  //The type cast operator has higher precedence than the assignment operator, so we need to use parentheses to group the pointer type and apply the cast before the assignment.
	while(index < n)
	{
		string[index] = c;
		index++;
	}
return(s);
}

void	ft_putstr(char *str)
{
	int	count;
	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
}
int	main(void)
{
	char	a[] = "hece\n";
	char	mete[] = "hece\n";
	char	b[] = "hece\n";
	char	nete[] = "hece\n";
	ft_putstr(a);
	ft_memset(mete, 'b', 3);
	ft_putstr(mete);
	ft_putstr(b);
	memset(nete, 'b', 3);
	ft_putstr(nete);
}
