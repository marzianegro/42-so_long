/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkMapUtils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:28:21 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/14 18:28:22 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_counters(t_map *map, int x, int y)
{
	if (map->map[y][x] == 'E')
		map->e_count++;
	if (map->map[y][x] == 'P')
	{
		map->p_count++;
		map->player[0] = y;
		map->player[1] = x;
	}
	if (map->map[y][x] == 'C')
		map->c_count++;
}

/*map->height è il numero di puntatori alle varie stringhe e il + 1 serve
	per il NULL*/
char	**ft_mtxdup(t_map *map)
{
	char	**dup;
	int		y;

	y = 0;
	dup = ft_calloc(map->height + 1, sizeof(char *));
	while (map->map[y] != NULL)
	{
		dup[y] = ft_strdup(map->map[y]);
		y++;
	}
	return (dup);
}

/* Da aggiungere anche se mapcopy[y][x] == '0' */
void	ft_afterff(t_map *map, char **mapcopy)
{
	int	x;
	int	y;

	y = 0;
	while (map->map[++y] != NULL)
	{
		x = 1;
		while (x < map->width - 1)
		{
			if (mapcopy[y][x] == 'E' || mapcopy[y][x] == 'C')
			{
				ft_freematrix(mapcopy);
				ft_exit(map, 3);
			}
			else if (mapcopy[y][x] != '*' && mapcopy[y][x] != '1'
				&& mapcopy[y][x] != '0' && mapcopy[y][x] != 'O')
			{
				ft_freematrix(mapcopy);
				ft_exit(map, 2);
			}
			x++;
		}
	}
	ft_freematrix(mapcopy);
}
