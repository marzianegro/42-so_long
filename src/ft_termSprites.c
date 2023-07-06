/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_termSprites.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:38:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:26:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_unload_misc(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->path);
	mlx_destroy_image(game->mlx_ptr, game->wall);
	mlx_destroy_image(game->mlx_ptr, game->exit);
	mlx_destroy_image(game->mlx_ptr, game->cltb);
}

void	ft_unload_p(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->dawn.w);
	mlx_destroy_image(game->mlx_ptr, game->dawn.a);
	mlx_destroy_image(game->mlx_ptr, game->dawn.s);
	mlx_destroy_image(game->mlx_ptr, game->dawn.d);
}

void	ft_unload_all(t_game *game)
{
	ft_unload_misc(game);
	ft_unload_p(game);
}
