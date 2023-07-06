/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkMap_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:48:45 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:28:28 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_northandsouth(t_map	*map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map->map[0][x])
	{
		if (map->map[y][x] != '1')
			ft_exit(map, 2);
		x++;
	}
	while (map->map[map->height - 1][x])
	{
		if (map->map[y][x] != '1')
			ft_exit(map, 2);
		x++;
	}
	ft_westandeast(map);
}

void	ft_westandeast(t_map *map)
{
	int	y;

	y = 0;
	while (map->map[y] != NULL)
	{
		if (map->map[y][0] != '1' || map->map[y][map->width - 1] != '1')
			ft_exit(map, 2);
		y++;
	}
}

void	ft_checkelems(t_map *map)
{
	int	x;
	int	y;

	y = 1;
	map->e_count = 0;
	map->p_count = 0;
	map->c_count = 0;
	map->j_count = 0;
	while (map->map[y] != NULL)
	{
		x = 1;
		while (x < map->width - 1)
		{
			ft_counters(map, x, y);
			x++;
		}
		y++;
	}
	if (map->e_count != 1 || map->p_count != 1 || map->c_count < 1)
		ft_exit(map, 1);
}

void	ft_floodfill(char **mapcopy, int x, int y)
{
	if (mapcopy[y][x] == '0' || mapcopy[y][x] == 'E'
		|| mapcopy[y][x] == 'P' || mapcopy[y][x] == 'C')
	{
		if (mapcopy[y][x] == 'E')
		{
			mapcopy[y][x] = 'O';
			return ;
		}
		else
			mapcopy[y][x] = '*';
		ft_floodfill(mapcopy, x, y - 1);
		ft_floodfill(mapcopy, x + 1, y);
		ft_floodfill(mapcopy, x, y + 1);
		ft_floodfill(mapcopy, x - 1, y);
	}
}

void	ft_checkchecks(t_map *map)
{
	char	**mapcopy;

	ft_northandsouth(map);
	ft_checkelems(map);
	mapcopy = ft_mtxdup(map);
	ft_floodfill(mapcopy, map->player[X], map->player[Y]);
	ft_afterff(map, mapcopy);
}
