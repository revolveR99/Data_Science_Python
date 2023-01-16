/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:31 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/16 16:38:49 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Girilen stringin için de strin aramaya yarıyor
// şu mantıkta çalışıyor 2 string içinde index değeri
// oluşturuyoruz ilk önce aradıgımız kısmı içeren stringin
// boş mu dolu mu oldugunu kontrol ediyoruz daha sonra
// ilk stringimin ilk indexi 2. stringimin 0. indeksi ile aynımı
// diye konterol ediyoruz eğer aynı ise ilk stringin mevcut indexi
// ile 2. stringin indexleri eşitmi diye kontrol ediyoruz eşitse
// 2. stringimin indexinin 1 fazlası nullmu diye bakıyoruz eğer null sa
// 1. strıngimizin o adresten itibaren olan kısmını döndürüyoruz
// örnek vermek gerekirse "hasan" "san" diye 2 stringim var
// çıktım ise "san" olarak olacaktır vesselam...

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i1;
	size_t	i2;

	if (!*to_find)
		return ((char *)str);
	i1 = 0;
	while (str[i1] != '\0' && (size_t)i1 < len)
	{
		if (str[i1] == to_find[0])
		{
			i2 = 0;
			while (str[i1 + i2] == to_find[i2] && i1 + i2 < len)
			{
				if (to_find[i2 + 1] == '\0')
					return ((char *)&str[i1]);
				i2++;
			}
		}
		i1++;
	}
	return (0);
}