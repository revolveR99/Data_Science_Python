/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:59:16 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/26 20:09:05 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 65 && str[i] <= 95)
		{
			str[i] = str[i] + 32;
		}
			i++;
	}
	return (str);
}
