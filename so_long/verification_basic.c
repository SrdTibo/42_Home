/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification_basic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:29:54 by tserdet           #+#    #+#             */
/*   Updated: 2023/01/10 14:52:21 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	verif_by_line_start(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] == 'P')
			return (1);
		i++;
	}
	return (0);
}

int	verif_by_line_exit(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] == 'E')
			return (1);
		i++;
	}
	return (0);
}

int	verif_by_line_items(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] == 'C')
			return (1);
		i++;
	}
	return (0);
}

const char *error(int start, int exit, int items)
{
	if (start != 1)
		return ("Error\nIl dois y avoir UNE entrée");
	if (exit != 1)
		return ("Error\nIl dois y avoir UNE sortie");
	if	(items < 1)
		return ("Error\nIl dois y avoir minimum UN item");
	return ("Ok!");
}

const char *verification_basic()
{
	int	fd;
	char *line;
	int exit;
	int	start;
	int	items;

	items = 0;
	exit = 0;
	start = 0;
	line = NULL;
	fd = open("map.ber", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		start += verif_by_line_start(line);
		exit += verif_by_line_exit(line);
		items += verif_by_line_items(line);
	}
	close(fd);
	if (start != 1 || exit != 1 || items < 1)
		return (error(start, exit, items));
	return ("Basic verification :Ok!\n");
}
