/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:42:39 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/15 13:42:41 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// ft_strchr ye çok benzer bir fonksiyondur
// aralarında küçük farklar vardır aldıgı parametreler gibi
// misal n diye bir sınırlayıcı bir değer vardır bu fonksiyonda
// ve en önemlisi stringin türü fark etmeksizin alan bir fonk-
// siyondur örnek vermek gerekirse
// "www.torosbilisim.com", ".", 10 diye verdiğim değerlerden çıktım
// ".torosbilisim.com" olur ilk 10 karaktere bakar eğer 10 karakter
// içinde hala yoksa null döndrür vesselam...

#include <stdio.h>
#include <string.h>
void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)str;
	while (index < n)
	{
		if ((unsigned char)string[index] == (unsigned char)c)
			return ((void *)&string[index]); //--------- 13 linede void *ft~~ olduqu ucun ama const void *str string const voiddi onu voide dondururuk.
		index++;
	}
	return (0);
}


int	main(void)
{
	char	*p = "deneme";
	char	b = 'e';
	printf("org : %s, mine : %s", memchr(p,b,4), ft_memchr(p,b,4));
}