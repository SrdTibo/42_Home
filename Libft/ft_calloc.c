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

void	*ft_calloc(size_t elementCount, size_t elementSize )
{
	int		i;
	char	*pointeur;

	i = 0;
	pointeur = malloc(elementCount * elementSize);
	if (pointeur == NULL)
		return (NULL);
	if (elementCount == SIZE_MAX || elementSize == SIZE_MAX)
		return (NULL);
	while (pointeur[i] != '\0')
	{
		pointeur[i] = 0;
		i ++;
	}
	return (pointeur);
}
