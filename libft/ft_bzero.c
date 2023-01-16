/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:32:23 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/16 16:32:56 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dizideki belirlilen byte boyutu kadarlı olan kısmı
// 0 lar ile doldurur misal "hasan" diye bir stringim var
// ft_bzero(str, 4); dersem
// "0000n" çıktısını verir vesselam...


void	ft_bzero(void *ptr, size_t bytelenght)
{
	ft_memset(ptr, 0, bytelenght);
}