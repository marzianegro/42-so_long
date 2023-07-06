/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:29 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:26:19 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_print_mtx(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->map[y] != NULL)
	{
		x = 0;
		while (x < map->width)
		{
			printf("%c", map->map[y][x]);
			if (x == map->width - 1)
				printf("\n");
			x++;
		}
		y++;
	}
}

int	ft_end(t_game *game, int n)
{
	if (n == 3)
		ft_printf("\nYou've caught all Eevees! Prof. Oak congratulates "
			"you, \033[1;92myou win\033[0;39m! :)\n");
	ft_unload_all(game);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	mlx_destroy_display(game->mlx_ptr);
	ft_freematrix(game->map.map);
	free(game->mlx_ptr);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	(void)argc;
	game.map.map = ft_creatematrix(argv);
	ft_getmeasurements(&game.map);
	ft_checkchecks(&game.map);
	ft_mlxinit(&game.map, &game);
}
