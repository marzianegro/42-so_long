/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleEnds.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:10 by mnegro            #+#    #+#             */
/*   Updated: 2023/05/25 14:53:11 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_freematrix(char **matrix)
{
	int	i;

	i = 0;
	if (matrix)
	{
		while (matrix[i])
		{
			free(matrix[i]);
			i++;
		}
		free(matrix);
	}
}

void	ft_exit(t_map *map, int n)
{
	if (n == 1)
	{
		if (map->e_count != 1)
			ft_putstr_fd("\033[1;91mError\033[0;39m: invalid "
				"number of (E) exits!\n", 2);
		else if (map->p_count != 1)
			ft_putstr_fd("\033[1;91mError\033[0;39m: invalid "
				"number of (P) players!\n", 2);
		else if (map->c_count < 1)
			ft_putstr_fd("\033[1;91mError\033[0;39m: no (C) collectibles!\n", 2);
		ft_freematrix(map->map);
		exit(1);
	}
	else if (n == 2)
	{
		ft_putstr_fd("\033[1;91mError\033[0;39m: invalid map! \n", 2);
		ft_freematrix(map->map);
		exit(1);
	}
	else if (n == 3)
	{
		ft_putstr_fd("\033[1;91mError\033[0;39m: inaccessible path!\n", 2);
		ft_freematrix(map->map);
		exit(1);
	}
}
