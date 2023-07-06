/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loopMap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:17:37 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/22 14:17:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_redraw_ws(t_map *map, t_game *game, int x, int y)
{
	if (map->map[y][x] == '0')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->path, x * 64, y * 64);
	else if (map->map[y][x] == W)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.w, x * 64, y * 64);
	else if (map->map[y][x] == S)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.s, x * 64, y * 64);
}

void	ft_redraw_ad(t_map *map, t_game *game, int x, int y)
{
	if (map->map[y][x] == A)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.a, x * 64, y * 64);
	else if (map->map[y][x] == D)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->dawn.d, x * 64, y * 64);
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
	return (0);
}
