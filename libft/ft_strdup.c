/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:40:40 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/16 14:53:54 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Gönderilen stringi başka boş bir stringe string kadar byte 
// yeri açarak başka bir adrese kayıt etmeye yarar vesselam...

char	*ft_strdup(const char *str)
{
	char	*new;
	size_t	i;

	new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new[index] = str[i];
		index++;
	}
	new[i] = '\0';
	return (new);
}

/*#include <stdio.h>
int	main(void)
{
	char	*src = "bunu dupla";
	printf("%s -> %s", src, ft_strdup(src));
}*/


