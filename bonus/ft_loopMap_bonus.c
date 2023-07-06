/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loopMap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:17:37 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/22 14:17:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_redraw_ws(t_map *map, t_game *game, int x, int y)
{
	if (map->map[y][x] == '0')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->path, x * 64, y * 64);
	else if (map->map[y][x] == W)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.w[0], x * 64, y * 64);
	else if (map->map[y][x] == WRX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.w[1], x * 64, y * 64);
	else if (map->map[y][x] == WSX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.w[2], x * 64, y * 64);
	else if (map->map[y][x] == S)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.s[0], x * 64, y * 64);
	else if (map->map[y][x] == SRX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.s[1], x * 64, y * 64);
	else if (map->map[y][x] == SSX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.s[2], x * 64, y * 64);
}

void	ft_redraw_ad(t_map *map, t_game *game, int x, int y)
{
	if (map->map[y][x] == A)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.a[0], x * 64, y * 64);
	else if (map->map[y][x] == ARX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.a[1], x * 64, y * 64);
	else if (map->map[y][x] == ASX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.a[2], x * 64, y * 64);
	else if (map->map[y][x] == D)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.d[0], x * 64, y * 64);
	else if (map->map[y][x] == DRX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.d[1], x * 64, y * 64);
	else if (map->map[y][x] == DSX)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.d[2], x * 64, y * 64);
}

void	ft_movement_count(t_game *game)
{
	char	*moves;

	moves = ft_itoa(game->moves);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->wall, 0 * 64, 0 * 64);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->wall, 1 * 64, 0 * 64);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->wall, 2 * 64, 0 * 64);
	mlx_string_put(game->mlx_ptr, game->win_ptr,
		32, 32, 0xFFFFFF, "Movement count: ");
	mlx_string_put(game->mlx_ptr, game->win_ptr,
		125, 32, 0xFFFFFF, moves);
	free(moves);
}

int	ft_redrawinloop(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map.map[y] != NULL)
	{
		x = 0;
		while (x < game->map.width)
		{
			ft_redraw_ws(&game->map, game, x, y);
			ft_redraw_ad(&game->map, game, x, y);
			x++;
		}
		y++;
	}
	ft_movement_count(game);
	return (0);
}
