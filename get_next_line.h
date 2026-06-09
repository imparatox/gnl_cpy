/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteoimparato <matteoimparato@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 03:51:22 by mimparat          #+#    #+#             */
/*   Updated: 2026/06/09 04:44:03 by matteoimpar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_fill(char *stock, char *buf);
char	*ft_clean(char *buf, ssize_t ret, char *stock);
char	*ft_read(int fd, char *stock);
char	*ft_extract(char **stock);
char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *str, int c);
char	*ft_before(char *str);
char	*ft_after(char *str);

#endif
