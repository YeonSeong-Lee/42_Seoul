/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongyle <seongyle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:48:37 by seongyle          #+#    #+#             */
/*   Updated: 2022/04/23 22:03:02 by seongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	t_list	*get_node(t_list *head, int fd)
{
	t_list	*node;

	node = head->next;
	while (node)
	{
		if (node->fd == fd)
			return (node);
		node = node->next;
	}
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->fd = fd;
	node->save = NULL;
	node->prev = head;
	node->next = head->next;
	if (head->next)
		head->next->prev = node;
	head->next = node;
	return (node);
}

static char	*get_save_in_node(char **save, int fd)
{
	char	*buffer;
	ssize_t	ret_read;
	char	*new;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	new = *save;
	while (!new || !ft_strchr(new, '\n'))
	{
		ret_read = read(fd, buffer, BUFFER_SIZE);
		if (ret_read <= 0)
			break ;
		buffer[ret_read] = '\0';
		new = append_buffer(new, buffer);
	}
	free(buffer);
	if (ret_read < 0 || !new || *new == '\0')
	{
		free(new);
		return (NULL);
	}
	return (new);
}

static char	*get_line(char const *save)
{
	size_t	len;
	char	*line;

	if (ft_strchr(save, '\n'))
		len = ft_strchr(save, '\n') - save + 1;
	else
		len = ft_strchr(save, '\0') - save;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, save, len + 1);
	return (line);
}

static char	*set_remains(char **save, size_t offset)
{
	char	*new;

	new = malloc(ft_strlen(*save + offset) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, *save + offset, ft_strlen(*save + offset) + 1);
	free(*save);
	*save = NULL;
	return (new);
}

char	*get_next_line(int fd)
{
	static t_list	head;
	t_list			*node;
	char			*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	node = get_node(&head, fd);
	if (!node)
		return (NULL);
	node->save = get_save_in_node(&(node->save), fd);
	if (!(node->save))
		return (delete_node(&node));
	line = get_line(node->save);
	if (!line)
		return (delete_node(&node));
	node->save = set_remains(&(node->save), ft_strlen(line));
	if (!(node->save))
		return (delete_node(&node));
	return (line);
}
