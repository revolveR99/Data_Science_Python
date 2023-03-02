/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:39:03 by zabdulza          #+#    #+#             */
/*   Updated: 2023/03/02 14:58:33 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_sizeofword(int n)
{
	unsigned int	size;

	size = 0;
	if (n <= 0)
		size ++;
	while (n != 0)
	{
		n /= 10;
		size += 1;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	num;

	len = ft_sizeofword(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
