/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initMLX_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:58:42 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:28:48 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_draw_map(t_map *map, t_game *game)
{
	ft_upload_all(game);
	ft_draw_sprites(map, game);
}

int	ft_keys(int key, t_game *game)
{
	if (key == ESC_KEY)
		ft_end(game, 1);
	else if (key == W_KEY || key == UP_ARROW)
		ft_up(game, &game->map);
	else if (key == A_KEY || key == LEFT_ARROW)
		ft_left(game, &game->map);
	else if (key == S_KEY || key == DOWN_ARROW)
		ft_down(game, &game->map);
	else if (key == D_KEY || key == RIGHT_ARROW)
		ft_right(game, &game->map);
	else
		return (1);
	ft_printf("\033[0;37mMovement count: \033[1;92m%d\033[0;39m\r", game->moves);
	return (0);
}

void	ft_hooks(t_game *game)
{
	mlx_hook(game->win_ptr, 17, 0, ft_end, game);
	mlx_hook(game->win_ptr, 02, 1L << 0, ft_keys, game);
}

void	ft_mlxinit(t_map *map, t_game *game)
{
	game->mlx_ptr = mlx_init();
	game->win_ptr = mlx_new_window(game->mlx_ptr, map->width * 64,
			map->height * 64, "Collect all the Eeveelutions!");
	ft_draw_map(map, game);
	game->moves = 0;
	ft_hooks(game);
	mlx_loop_hook(game->mlx_ptr, ft_redrawinloop, game);
	mlx_loop(game->mlx_ptr);
}
