/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:41:48 by hece              #+#    #+#             */
/*   Updated: 2023/06/01 19:58:35 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*original_dst;

	if (!dst && !src)
		return (NULL);
	original_dst = dst;
	while (n--)
		*((char *)dst++) = *((char *)src++);
	return (original_dst);
}

int	ft_strchr(char *str)
{
	int	index;

	index = 0;
	if (!str)
		return (0);
	while (str[index])
	{
		if (str[index] == '\n')
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		len1;
	size_t		len2;
	char		*str;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 && !s2)
		return (NULL);
	if (s1)
		len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2 + 1);
	free(s1);
	return (str);
}

char	*ft_new_create_buffer(char *buffer)
{
	int		index;
	int		jndex;
	int		len;
	char	*res;

	index = 0;
	jndex = 0;
	len = ft_strlen(buffer);
	while (buffer[index] && buffer[index] != '\n')
		index++;
	if (!buffer[index])
	{
		free(buffer);
		return (NULL);
	}
	res = (char *)malloc(sizeof(char) * (len - index + 1));
	if (!res)
		return (NULL);
	index++;
	while (buffer[index])
		res[jndex++] = buffer[index++];
	res[jndex] = '\0';
	free(buffer);
	return (res);
}

char	*ft_create_buffer(char *buffer, int buff_size, int fd)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	while ((buff_size != 0 && !ft_strchr(buffer)))
	{
		buff_size = read(fd, temp, BUFFER_SIZE);
		if (buff_size == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[buff_size] = '\0';
		buffer = ft_strjoin(buffer, temp);
	}
	free(temp);
	if (buffer[0] == 0)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			index;

	index = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_create_buffer(buffer, 1, fd);
	if (!buffer)
		return (NULL);
	while (buffer[index] && buffer[index] != '\n')
		index++;
	line = (char *)malloc(sizeof(char) * (index + 2));
	if (!line)
		return (NULL);
	index = -1;
	while (buffer[++index] && buffer[index] != '\n')
		line[index] = buffer[index];
	if (buffer[index] == '\n')
	{
		line[index] = buffer[index];
		index++;
	}
	line[index] = '\0';
	buffer = ft_new_create_buffer(buffer);
	return (line);
}
