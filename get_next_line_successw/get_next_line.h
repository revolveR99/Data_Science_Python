/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:51:40 by hece              #+#    #+#             */
/*   Updated: 2023/06/01 19:54:43 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

typedef struct s_mystruct
{
	int	i;
	int	j;
}				t_mystruct;

char	*read_line(int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(char *s);
char	*get_next_line(int fd);
char	*ft_new_create_buffer(char *buffer);
char	*ft_create_buffer(char *buffer, int buff_size, int fd);
int		ft_strchr(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif
