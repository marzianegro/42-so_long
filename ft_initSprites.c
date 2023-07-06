/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initSprites.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:54:02 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/18 12:54:03 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	game->cltb = ft_create(game, "spt/C/evrx.xpm");
}

void	ft_upload_p(t_game *game)
{
	game->dawn.w = ft_create(game, "spt/P/w.xpm");
	game->dawn.a = ft_create(game, "spt/P/a.xpm");
	game->dawn.s = ft_create(game, "spt/P/s.xpm");
	game->dawn.d = ft_create(game, "spt/P/d.xpm");
}

void	ft_upload_all(t_game *game)
{
	ft_upload_misc(game);
	ft_upload_p(game);
}
