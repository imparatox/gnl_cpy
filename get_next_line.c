/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimparat <mimparat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 04:18:48 by mimparat          #+#    #+#             */
/*   Updated: 2026/06/03 21:28:25 by mimparat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			fd;
	char		buf[BUFFER_SIZE + 1];
	static char	*stock;
	char *tmp;

	if (fd == -1)
		return (1);
	while (read(fd, buf, BUFFER_SIZE) != 0)
	{
		buf[25] = '\0';
		printf("%s\n", buf);
	}

	while()
		tmp = stock;
		stock = strjoin(tmp, buffer);
		free(tmp)
		while (stock[i])
			if (stock == '\n')
				return line
		clean(stock)
}

int	main(void)
{
	// fd = open("./home/mimparat/common_core/file.txt", O_RDONLY);
	return (0);
}