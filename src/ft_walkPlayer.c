/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_walkPlayer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:08:38 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:26:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_walk_up(t_game *game, int x, int y)
{
	game->map.map[y][x] = '0';
	game->map.player[Y] = y - 1;
	if (game->map.map[y - 1][x] == '4' && game->map.c_count == 0)
	{
		game->map.map[y - 1][x] = W;
		ft_end(game, 3);
	}
	game->map.map[y - 1][x] = W;
}

void	ft_walk_left(t_game *game, int x, int y)
{
	game->map.map[y][x] = '0';
	game->map.player[X] = x - 1;
	if (game->map.map[y][x - 1] == '4' && game->map.c_count == 0)
	{
		game->map.map[y][x - 1] = A;
		ft_end(game, 3);
	}
	game->map.map[y][x - 1] = A;
}

void	ft_walk_down(t_game *game, int x, int y)
{
	game->map.map[y][x] = '0';
	game->map.player[Y] = y + 1;
	if (game->map.map[y + 1][x] == '4' && game->map.c_count == 0)
	{
		game->map.map[y + 1][x] = S;
		ft_end(game, 3);
	}
	game->map.map[y + 1][x] = S;
}

void	ft_walk_right(t_game *game, int x, int y)
{
	game->map.map[y][x] = '0';
	game->map.player[X] = x + 1;
	if (game->map.map[y][x + 1] == '4' && game->map.c_count == 0)
	{
		game->map.map[y][x + 1] = D;
		ft_end(game, 3);
	}
	game->map.map[y][x + 1] = D;
}
