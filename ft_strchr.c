/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:06:56 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/15 13:37:34 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

// Girilen stringde belirtilen karakteri arayıp
// bulunduktan sonraki kısımda o adresten itibaren
// geri kalanı döndrmeye yarıyor örnek vermek gerekirse
// "www.torosbilisim.com" '.' olsun çıktım ise
// ".torosbilism.com" olarak olacaktır vesselam...

#include <stddef.h>
char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)&str[index]); //evvelde char yazib 21 de ona gore const char * strni chara donderirik // casting changing data type from adress to character
		index++;
	}
	return (0);
}

#include <stdio.h> 


int	main(void)
{
	char	*str = "deneme yazisi";
	char	c = 'z';
	printf("%s | %c -> %s\n", str, c, ft_strchr(str, c));
}