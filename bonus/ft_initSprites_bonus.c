/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initSprites_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:54:02 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/18 12:54:03 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	*ft_create(t_game *game, char *path)
{
	int		width;
	int		height;
	void	*sprite;

	sprite = mlx_xpm_file_to_image(game->mlx_ptr, path, &width, &height);
	return (sprite);
}

void	ft_upload_misc(t_game *game)
{
	game->path = ft_create(game, "spt/0.xpm");
	game->wall = ft_create(game, "spt/1.xpm");
	game->exit = ft_create(game, "spt/E.xpm");
	game->tr[0] = ft_create(game, "spt/TR/f/s.xpm");
	game->tr[1] = ft_create(game, "spt/TR/m/s.xpm");
}

void	ft_upload_p(t_game *game)
{
	game->dawn.w[0] = ft_create(game, "spt/P/w.xpm");
	game->dawn.w[1] = ft_create(game, "spt/P/wrx.xpm");
	game->dawn.w[2] = ft_create(game, "spt/P/wsx.xpm");
	game->dawn.a[0] = ft_create(game, "spt/P/a.xpm");
	game->dawn.a[1] = ft_create(game, "spt/P/arx.xpm");
	game->dawn.a[2] = ft_create(game, "spt/P/asx.xpm");
	game->dawn.s[0] = ft_create(game, "spt/P/s.xpm");
	game->dawn.s[1] = ft_create(game, "spt/P/srx.xpm");
	game->dawn.s[2] = ft_create(game, "spt/P/ssx.xpm");
	game->dawn.d[0] = ft_create(game, "spt/P/d.xpm");
	game->dawn.d[1] = ft_create(game, "spt/P/drx.xpm");
	game->dawn.d[2] = ft_create(game, "spt/P/dsx.xpm");
}

void	ft_upload_c(t_game *game)
{
	game->cltb[0].evlt[0] = ft_create(game, "spt/C/evrx.xpm");
	game->cltb[0].evlt[1] = ft_create(game, "spt/C/evsx.xpm");
	game->cltb[1].evlt[0] = ft_create(game, "spt/C/esrx.xpm");
	game->cltb[1].evlt[1] = ft_create(game, "spt/C/essx.xpm");
	game->cltb[2].evlt[0] = ft_create(game, "spt/C/flrx.xpm");
	game->cltb[2].evlt[1] = ft_create(game, "spt/C/flsx.xpm");
	game->cltb[3].evlt[0] = ft_create(game, "spt/C/glrx.xpm");
	game->cltb[3].evlt[1] = ft_create(game, "spt/C/glsx.xpm");
	game->cltb[4].evlt[0] = ft_create(game, "spt/C/jorx.xpm");
	game->cltb[4].evlt[1] = ft_create(game, "spt/C/josx.xpm");
	game->cltb[5].evlt[0] = ft_create(game, "spt/C/lerx.xpm");
	game->cltb[5].evlt[1] = ft_create(game, "spt/C/lesx.xpm");
	game->cltb[6].evlt[0] = ft_create(game, "spt/C/syrx.xpm");
	game->cltb[6].evlt[1] = ft_create(game, "spt/C/sysx.xpm");
	game->cltb[7].evlt[0] = ft_create(game, "spt/C/umrx.xpm");
	game->cltb[7].evlt[1] = ft_create(game, "spt/C/umsx.xpm");
	game->cltb[8].evlt[0] = ft_create(game, "spt/C/varx.xpm");
	game->cltb[8].evlt[1] = ft_create(game, "spt/C/vasx.xpm");
}

void	ft_upload_all(t_game *game)
{
	ft_upload_misc(game);
	ft_upload_p(game);
	ft_upload_c(game);
}
