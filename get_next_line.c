/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteoimparato <matteoimparato@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 04:18:48 by mimparat          #+#    #+#             */
/*   Updated: 2026/06/04 14:19:37 by matteoimpar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *stock)
{
	ssize_t	ret;
	char	buf[BUFFER_SIZE + 1];
	char	*tmp;

	ret = read(fd, buf, BUFFER_SIZE);
	while (ret > 0)
	{
		buf[BUFFER_SIZE] = '\0';
		tmp = stock;
		stock = ft_strjoin(tmp, buf);
		free(tmp);
		if (ft_strchr(stock, '\n'))
			break ;
		ret = read(fd, buf, BUFFER_SIZE);
	}
	if (ret == -1)
	{
		free(stock);
		stock = NULL;
		return (NULL);
	}
	return (stock);
}

char	*get_next_line(int fd)
{
	char		*tmp;
	char		*line;
	static char	*stock;

	if (fd == -1)
		return (NULL);
	stock = ft_read(fd, stock);
	if (ft_strchr(stock, '\n'))
	{
		tmp = stock;
		line = ft_before(tmp);
		stock = ft_after(tmp);
		free(tmp);
		return (line);
	}
	else
	{
		tmp = stock;
		stock = NULL;
		return (tmp);
	}
}
