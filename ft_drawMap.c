/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawMap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:43:53 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/16 18:43:54 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* This function draws walls, path, and enemy*/
void	ft_wpe(t_map *map, t_game *game, int x, int y)
{
	if (map->map[y][x] == '1')
	{
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->wall, x * 64, y * 64);
		map->map[y][x] = '2';
	}
	else if (map->map[y][x] == '0')
	{
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->path, x * 64, y * 64);
		map->map[y][x] = '3';
	}
	else if (map->map[y][x] == 'E')
	{
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->exit, x * 64, y * 64);
		map->map[y][x] = '4';
	}
}

void	ft_draw_sprites(t_map *map, t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (map->map[y] != NULL)
	{
		x = 0;
		while (x < map->width)
		{
			ft_wpe(map, game, x, y);
			if (map->map[y][x] == 'C')
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->cltb, x * 64, y * 64);
			if (map->map[y][x] == 'P')
			{
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->dawn.s, x * 64, y * 64);
				map->map[y][x] = S;
			}
			x++;
		}
		y++;
	}
}
