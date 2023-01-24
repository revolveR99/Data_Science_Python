/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zero <zero@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:06:56 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/24 11:21:23 by zero             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	index;

	index = 0;
	if (str == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)&str[index]);
		index++;
	}
	return (0);
}

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return (char *)s;
}

This is C programming code that defines a function called "ft_strchr". The function takes in two parameters, a pointer to a string "s" and an integer "c".

The function uses a while loop to iterate through the string, starting from the first character, and checks if the current character is equal to the integer "c". If it is, the function returns a pointer to the current location in the string. If it is not, the function continues to the next character in the string.

If the end of the string is reached and the character "c" has not been found, the function returns a null pointer (0).

This function is similar to the C library function strchr() which has the same purpose.
Zamir Abdulzada
if (!*s++)
			return (0);

This line of code is checking if the current character being pointed to by the pointer "s" is the null character '\0'. The "!" operator is negating the value of the dereferenced pointer, so it's checking if the character is not '\0'.

If the current character is not '\0', the code block inside the if statement will not be executed. If the current character is '\0', the code block inside the if statement will be executed and the function will return a null pointer (0), indicating that the character "c" was not found in the string.

The "++" operator at the end of "!*s++" is the post-increment operator. It increments the value of "s" after the current operation is finished, so that the next iteration of the loop the pointer "s" will point to the next character in the string.
