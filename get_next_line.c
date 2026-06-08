/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimparat <mimparat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:03:26 by mimparat          #+#    #+#             */
/*   Updated: 2026/06/08 08:23:50 by mimparat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_fill(char *stock, char *buf)
{
	char	*tmp;

	tmp = stock;
	stock = ft_strjoin(tmp, buf);
	free(tmp);
	return (stock);
}

char	*ft_read(int fd, char *stock)
{
	ssize_t	ret;
	char	*buf;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	ret = read(fd, buf, BUFFER_SIZE);
	while (ret > 0)
	{
		buf[ret] = '\0';
		stock = ft_fill(stock, buf);
		if (ft_strchr(stock, '\n'))
		{
			free(buf);
			buf = NULL;
			break ;
		}
		ret = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	if (ret == -1)
	{
		free(stock);
		stock = NULL;
		return (NULL);
	}
	return (stock);
}

char	*ft_extract(char **stock)
{
	char	*tmp;
	char	*line;

	if (ft_strchr(*stock, '\n'))
	{
		tmp = *stock;
		line = ft_before(tmp);
		*stock = ft_after(tmp);
		free(tmp);
		return (line);
	}
	else
	{
		tmp = *stock;
		*stock = NULL;
		return (tmp);
	}
}

char	*get_next_line(int fd)
{
	static char	*stock;

	if (fd == -1)
		return (NULL);
	stock = ft_read(fd, stock);
	if (stock == NULL || stock[0] == '\0')
	{
		free(stock);
		stock = NULL;
		return (NULL);
	}
	return (ft_extract(&stock));
}
