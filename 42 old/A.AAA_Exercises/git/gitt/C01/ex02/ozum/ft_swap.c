/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:50:05 by zabdulza          #+#    #+#             */
/*   Updated: 2022/10/17 13:04:51 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int     c;
    c = *a;
    *a = *b;
    *b = c;
}

int     main()
{
    int x;
    int y;
    int *a;
    int *b;
    
    x = 21;
    y = 42;
    
    a = &x;
    b = &y;
    
    printf("Before: a :%d b: %d\n ", *a ,*b);
    ft_swap(a,b);
    printf("Before: a :%d b: %d ", *a ,*b);
    
    
}
