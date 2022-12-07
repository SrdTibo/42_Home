/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:29:56 by tserdet           #+#    #+#             */
/*   Updated: 2022/12/07 15:49:05 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (30)
#endif

char	*read_join(int	fd, char *stat);
void	*ft_calloc(size_t elementCount, size_t elementSize );
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize );
int		check_slash_n(char *stat);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
#endif