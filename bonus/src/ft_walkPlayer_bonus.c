/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_walkPlayer_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:08:38 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:29:02 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

/* If 'step' is even, the player makes a step with the right foot in front,
	otherwise with the left */
void	ft_walk_up(t_game *game, int x, int y, int step)
{
	game->map.map[y][x] = '0';
	if (step % 2 != 0)
	{
		game->map.player[Y] = y - 1;
		if (game->map.map[y - 1][x] == '4' && game->map.c_count == 0)
		{
			game->map.map[y - 1][x] = WRX;
			ft_end(game, 3);
		}
		game->map.map[y - 1][x] = WRX;
	}
	else
	{
		game->map.player[Y] = y - 1;
		if (game->map.map[y - 1][x] == '4' && game->map.c_count == 0)
		{
			game->map.map[y - 1][x] = WSX;
			ft_end(game, 3);
		}
		game->map.map[y - 1][x] = WSX;
	}
}

void	ft_walk_left(t_game *game, int x, int y, int step)
{
	game->map.map[y][x] = '0';
	if (step % 2 != 0)
	{
		game->map.player[X] = x - 1;
		if (game->map.map[y][x - 1] == '4' && game->map.c_count == 0)
		{
			game->map.map[y][x - 1] = ARX;
			ft_end(game, 3);
		}
		game->map.map[y][x - 1] = ARX;
	}
	else
	{
		game->map.player[X] = x - 1;
		if (game->map.map[y][x - 1] == '4' && game->map.c_count == 0)
		{
			game->map.map[y][x - 1] = ASX;
			ft_end(game, 3);
		}
		game->map.map[y][x - 1] = ASX;
	}
}

void	ft_walk_down(t_game *game, int x, int y, int step)
{
	game->map.map[y][x] = '0';
	if (step % 2 != 0)
	{
		game->map.player[Y] = y + 1;
		if (game->map.map[y + 1][x] == '4' && game->map.c_count == 0)
		{
			game->map.map[y + 1][x] = SRX;
			ft_end(game, 3);
		}
		game->map.map[y + 1][x] = SRX;
	}
	else
	{
		game->map.player[Y] = y + 1;
		if (game->map.map[y + 1][x] == '4' && game->map.c_count == 0)
		{
			game->map.map[y + 1][x] = SSX;
			ft_end(game, 3);
		}
		game->map.map[y + 1][x] = SSX;
	}
}

void	ft_walk_right(t_game *game, int x, int y, int step)
{
	game->map.map[y][x] = '0';
	if (step % 2 != 0)
	{
		game->map.player[X] = x + 1;
		if (game->map.map[y][x + 1] == '4' && game->map.c_count == 0)
		{
			game->map.map[y][x + 1] = DRX;
			ft_end(game, 3);
		}
		game->map.map[y][x + 1] = DRX;
	}
	else
	{
		game->map.player[X] = x + 1;
		if (game->map.map[y][x + 1] == '4' && game->map.c_count == 0)
		{
			game->map.map[y][x + 1] = DSX;
			ft_end(game, 3);
		}
		game->map.map[y][x + 1] = DSX;
	}
}
