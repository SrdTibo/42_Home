/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:30:55 by tserdet           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:00 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_join(int	fd, char *stat)
{
	int 	result_read;
	char	buf[BUFFER_SIZE + 1];
	int		check;

	result_read = 1;
	check = 0;
	while (check == 0 && result_read > 0)
	{
		result_read = read(fd, buf, BUFFER_SIZE);
		buf[result_read] = '\0';
		stat = ft_strjoin(stat, buf);
		check = check_slash_n(stat);
	}
	stat[ft_strlen(stat) + 1] = '\0';
	return (stat);
}

char	*return_line(char *stat)
{
	int		i;
	int		j;
	char	*one_line;

	i = 0;
	j = 0;
	if (stat[i] == '\0')
		return (NULL);
	while (stat[i] != '\n' && stat[i] != '\0')
		i++;
	if (stat[i] == '\n')
		i += 2;
	one_line = ft_calloc(sizeof(char) , i);
	i = 0;
	while (stat[i] != '\0' && stat[i - 1] != '\n')
	{
		one_line[i] = stat[i];
		i++;
	}
	if (stat[i - 1] == '\n')
		one_line[i] = '\0';
	else
		one_line[i] = '\0';
	return(one_line);
}

char	*clear_stat(char	*stat, char *final_line_result)
{
	int		i;
	int		t;
	char	*rest;

	i = 0;
	t = 0;
	rest = malloc((ft_strlen(stat) - ft_strlen(final_line_result))* sizeof(char) + 1);
	while(stat[i] != '\0' && stat[i] != '\n')
		i++;
	i++;
	while (stat[i] != '\0')
		rest[t++] = stat[i++];
	rest[t] = '\0';
	return(rest);
}

char	*get_next_line(int fd)
{
	int				i;
	static	char	*stat;
	char			*final_line_result;

	i = 0;
	stat = read_join(fd, stat);
	final_line_result = return_line(stat);
	if (final_line_result == NULL)
		return (NULL);
	stat = clear_stat(stat, final_line_result);
	return(final_line_result);
}

// int main()
// {
	
// 	int fd = open("test.txt", O_RDONLY);
// 	char *line;
// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		if (line == NULL)
// 		break;
// 		printf("%s", line);
// 	}
// 	return 0;
// }
