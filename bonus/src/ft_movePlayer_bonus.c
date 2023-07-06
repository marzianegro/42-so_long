/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movePlayer_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:18:16 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:28:54 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_up(t_game *game, t_map *map)
{
	static int	step = 1;
	int			y;
	int			x;

	y = map->player[Y];
	x = map->player[X];
	if (map->map[y - 1][x] == '2' || (map->map[y - 1][x] == '4'
		&& map->c_count != 0))
		map->map[y][x] = W;
	else if (map->map[y - 1][x] != '2')
	{
		if (map->map[y - 1][x] == 'J')
			ft_end(game, 2);
		if (map->map[y - 1][x] == 'C')
			map->c_count--;
		ft_walk_up(game, x, y, step);
		game->moves++;
	}
	step++;
}

void	ft_left(t_game *game, t_map *map)
{
	static int	step = 1;
	int			y;
	int			x;

	y = map->player[Y];
	x = map->player[X];
	if (map->map[y][x - 1] == '2' || (map->map[y][x - 1] == '4'
		&& map->c_count != 0))
		map->map[y][x] = A;
	else if (map->map[y][x - 1] != '2')
	{
		if (map->map[y][x - 1] == 'J')
			ft_end(game, 2);
		if (map->map[y][x - 1] == 'C')
			map->c_count--;
		ft_walk_left(game, x, y, step);
		game->moves++;
	}
	step++;
}

void	ft_down(t_game *game, t_map *map)
{
	static int	step = 1;
	int			y;
	int			x;

	y = map->player[Y];
	x = map->player[X];
	if (map->map[y + 1][x] == '2' || (map->map[y + 1][x] == '4'
		&& map->c_count != 0))
		map->map[y][x] = S;
	else if (map->map[y + 1][x] != '2')
	{
		if (map->map[y + 1][x] == 'J')
			ft_end(game, 2);
		if (map->map[y + 1][x] == 'C')
			map->c_count--;
		ft_walk_down(game, x, y, step);
		game->moves++;
	}
	step++;
}

void	ft_right(t_game *game, t_map *map)
{
	static int	step = 1;
	int			y;
	int			x;

	y = map->player[Y];
	x = map->player[X];
	if (map->map[y][x + 1] == '2' || (map->map[y][x + 1] == '4'
		&& map->c_count != 0))
		map->map[y][x] = D;
	else if (map->map[y][x + 1] != '2')
	{
		if (map->map[y][x + 1] == 'J')
			ft_end(game, 2);
		if (map->map[y][x + 1] == 'C')
			map->c_count--;
		ft_walk_right(game, x, y, step);
		game->moves++;
	}
	step++;
}
