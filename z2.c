/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:16:59 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/15 12:17:58 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stddef.h>

char    *ft_strchr(const char *str, int c)
{
        int     index;       

		 index = 0;
        if (str == NULL)
                return (NULL);
        while (str[index] != '\0')
        {
                if (str[index] == c)
                        return ((char *)str);
                index++;
        }
        return (0);
}
#include <stdio.h>
int     main(void)
{
        char    *s1 = "zamir";
        char    *result = ft_strchr(s1, 'i');
        printf("%s\n", result);
        
}