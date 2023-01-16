/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:46:56 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/16 16:31:24 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calloc ramda tahsis edilecek olan alanı null ile doldurmaya
// yarayan bir fonksiyon oldugu çin num ve size çarpımı kadar 
// byte alanını pointer isimli pointerde adres açıyoruz
// ve onu ft_bzero fonksiyonuna gönderiyoruz oda ft_memset
// fonksiyonuna gönderiyor o fonksiyonların açıklamalarını okumanızı
// tavsiye ederim vesselam...

// The malloc() function allocates size bytes and returns a pointer to the  allocated  memory.
// On error, these //functions return NULL.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}



