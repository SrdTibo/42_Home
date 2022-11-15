/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:54:02 by tserdet           #+#    #+#             */
/*   Updated: 2022/07/23 16:23:56 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int nmbr_colums(char const *s, char sep)
{
	int	i;
	int compt;

	i = 0;
	compt = 0;
	while (s[i] != '\0')
	{
		if(s[i] == sep)
			i++;
		else
		{
			compt+=1;
			while(s[i] != sep && s[i])
				i++;
		}
	}
	return(compt);
}

char **alloc_lignes(char const *s, char sep, char **tab)
{
	int	i;
	int compt;
	int t;

	t = 0;
	i = 0;
	compt = 0;
	tab = malloc(nmbr_colums(s, sep) * sizeof(char *));
	if (tab == NULL)
		return(0);
	while(i < nmbr_colums(s, sep))
	{
		compt = 0;
		while(s[t] == sep)
			t++;
		while(s[t] != sep && s[t] != '\0')
		{
			compt++;
			t++;
		}
		tab[i++] = malloc((compt) * sizeof(char));
	}
	return(tab);
}

char	**allocation(char const *s, char sep, char **tab)
{
	int	i;
	int	t;
	int x;
	int compt;

	i = 0;
	x = 0;
	compt = nmbr_colums(s, sep);
	t = 0;
	while (i < compt)
	{
		while(s[t] == sep)
			t++;
		{
			while(s[t] != sep && s[t])
			{
				tab[i][x] = s[t];
				t++;
				x++;
			}
		}
		tab[i][x] = '\0';
		i++;
		x = 0;
	}
	return(tab);
}

char **ft_split(char const *s, char sep)
{
	char **tab = NULL;
	int	i;

	i = 0;
	tab = alloc_lignes(s, sep, tab);
	tab = allocation(s, sep, tab);
	if(tab == NULL || nmbr_colums (s, sep) == 0)
	{
		while(i < nmbr_colums(s, sep))
			free(tab[i]);
			i++;
	}
	else
	{
		return(tab);
	}
	return(tab);
}