/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:44:05 by seongyle          #+#    #+#             */
/*   Updated: 2022/04/23 21:31:05 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 42

# include <unistd.h>
# include <stdlib.h>


typedef struct s_list
{
	int				fd;
	char			*save;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

char	*get_next_line(int fd);
void	*delete_node(t_list **node);
char	*append_buffer(char *save, char const *buffer);
size_t	ft_strlen(char const *s);
char	*ft_strchr(char const *s, int c);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);

#endif
