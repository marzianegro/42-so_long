/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawMap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:43:53 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:28:39 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

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

void	ft_cj(t_map *map, t_game *game, int x, int y)
{
	if (map->map[y][x] == 'C')
	{
		game->rdm_c = rand() % 9;
		if (game->step % 2 == 0)
		{
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
				game->cltb[game->rdm_c].evlt[0], x * 64, y * 64);
		}
		else
		{
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
				game->cltb[game->rdm_c].evlt[1], x * 64, y * 64);
		}
		game->step--;
	}
	if (map->map[y][x] == 'J')
	{
		game->rdm_j = rand() % 2;
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->tr[game->rdm_j], x * 64, y * 64);
	}
}

void	ft_draw_sprites(t_map *map, t_game *game)
{
	int	x;
	int	y;

	y = 0;
	srand(time(NULL));
	game->step = map->c_count;
	while (map->map[y] != NULL)
	{
		x = 0;
		while (x < map->width)
		{
			ft_wpe(map, game, x, y);
			ft_cj(map, game, x, y);
			if (map->map[y][x] == 'P')
			{
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->dawn.s[0], x * 64, y * 64);
				map->map[y][x] = S;
			}
			x++;
		}
		y++;
	}
}
