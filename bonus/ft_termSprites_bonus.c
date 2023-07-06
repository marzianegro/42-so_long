/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_termSprites_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:38:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/24 15:38:55 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_unload_misc(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->path);
	mlx_destroy_image(game->mlx_ptr, game->wall);
	mlx_destroy_image(game->mlx_ptr, game->exit);
	mlx_destroy_image(game->mlx_ptr, game->tr[0]);
	mlx_destroy_image(game->mlx_ptr, game->tr[1]);
}

void	ft_unload_p(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->dawn.w[0]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.w[1]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.w[2]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.a[0]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.a[1]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.a[2]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.s[0]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.s[1]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.s[2]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.d[0]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.d[1]);
	mlx_destroy_image(game->mlx_ptr, game->dawn.d[2]);
}

void	ft_unload_c(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->cltb[0].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[0].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[1].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[1].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[2].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[2].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[3].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[3].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[4].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[4].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[5].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[5].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[6].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[6].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[7].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[7].evlt[1]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[8].evlt[0]);
	mlx_destroy_image(game->mlx_ptr, game->cltb[8].evlt[1]);
}

void	ft_unload_all(t_game *game)
{
	ft_unload_misc(game);
	ft_unload_p(game);
	ft_unload_c(game);
}
