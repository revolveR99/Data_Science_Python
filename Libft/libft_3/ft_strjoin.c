/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:28:26 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/25 17:28:26 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	length;

	if (!s1 || !s2)
		return (0);
	length = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (length + 1));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, s1, length + 1);
	ft_strlcat(newstr, s2, length + 1);
	return (newstr);
}
