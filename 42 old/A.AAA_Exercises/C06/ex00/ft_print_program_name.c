/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:49:10 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/26 12:49:12 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Create a program that displays its own name followed by a new line.

#include <unistd.h>
//--------------------
int	main(int argc, char **argv)
{
	while (*argv[0] && argc > 0)
	{
		write(1, argv[0], 1); // &*argv[0] = argv[0]
		argv[0]++;
	}
	write(1, "\n", 1);
}

//---------------------
/*int	main(int argc, char **argv)
{
	int	i;
	i = 0;
	while (*argv[i] && argc > 0)
	{
		write(1, &*argv[i], 1);
		argv[i]++;
	}
	write(1, "\n", 1);
}
*/
//--------------------
/*int	main(int argc, char **argv)
{
	int	i;
	i = 0;
	while (argv[0][i] && argc > 0)
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
*/
