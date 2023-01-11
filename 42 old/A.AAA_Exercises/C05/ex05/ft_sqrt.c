/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:35:03 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/26 11:35:05 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	
	while (i * i < nb )
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}


/*int  ft_sqrt(int nb)
{
  int i;

  if (nb > 46340 * 46340)
    return (0);
  while (i < nb)
  {
    if ((i * i) == nb)
      return (i);
    i++;
  }
  return (0);
}
*/

#include <stdio.h>
int main (void)
{
	printf("%d\n",ft_sqrt(2147483647));
}
