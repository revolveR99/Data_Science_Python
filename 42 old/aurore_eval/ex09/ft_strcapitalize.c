/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelpy <adelpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:50:56 by adelpy            #+#    #+#             */
/*   Updated: 2022/10/23 14:40:57 by adelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	x1;

	x = 0;
	x1 = 1;
	ft_strlowcase (str);
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (x1 == 1)
				str[x] -= 32;
			x1 = 0;
		}
		else if (str[x] >= '0' && str[x] <= '9')
			x1 = 0;
		else
			x1 = 1;
		x++;
	}
	return (str);
}
