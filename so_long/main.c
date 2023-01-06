/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:29:54 by tserdet           #+#    #+#             */
/*   Updated: 2023/01/06 16:13:43 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

int main()
{
    void *mlx;
    void *win;
    void *img;
	int	width;
	int	height;
	int	i;

    mlx = mlx_init();
    win = mlx_new_window(mlx, 1920, 1080, "Ma fenêtre MiniLibX");
    while (i < 7)
	{
		img = mlx_xpm_file_to_image(mlx, "sprites/move/move"i".xpm", &width, &height);
		i++;
	}
    mlx_put_image_to_window(mlx, win, img, 0, 0);
    mlx_loop(mlx);

    return 0;
}
