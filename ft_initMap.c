/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initMap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/05/25 14:53:15 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_creatematrix(char **argv)
{
	int		fd;
	void	*buf;
	char	*premap;
	int		bytes;

	fd = open(argv[1], O_RDONLY);
	premap = NULL;
	bytes = SIZE;
	while (bytes == SIZE)
	{
		buf = ft_calloc(SIZE + 1, sizeof(char));
		bytes = read(fd, buf, SIZE);
		premap = ft_strjoin(premap, buf);
		free(buf);
	}
	close(fd);
	return (ft_split(premap, '\n'));
}

void	ft_getmeasurements(t_map *map)
{
	int	y;

	y = 0;
	map->width = ft_strlen(map->map[y]);
	while (map->map[y] != NULL)
		y++;
	map->height = y;
	if (map->width == map->height)
		ft_exit(map, 2);
	else if (y < 3)
		ft_exit(map, 2);
}
