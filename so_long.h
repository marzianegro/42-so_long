/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:58:27 by mnegro            #+#    #+#             */
/*   Updated: 2023/06/14 18:58:28 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* HEADER FILES */
# include "libft/libft.h"
# include "libft/libftprintf.h"
# include "minilibx-linux/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>

/* MACROS */
# define SIZE 1000000
# define X 1
# define Y 0

# define UP_ARROW		65362
# define LEFT_ARROW		65361
# define RIGHT_ARROW	65363
# define DOWN_ARROW		65364

# define W_KEY		119
# define A_KEY		97
# define S_KEY		115
# define D_KEY		100
# define ESC_KEY	65307

# define W		97
# define WRX	98
# define WSX	99
# define A		100
# define ARX	101
# define ASX	102
# define S		103
# define SRX	104
# define SSX	105
# define D		106
# define DRX	107
# define DSX	108

/* STRUCTURES */
typedef struct s_map {
	char	**map;
	int		width;
	int		height;
	char	exit;
	int		player[2];
	char	collectible;
	int		e_count;
	int		p_count;
	int		c_count;
}			t_map;

typedef struct s_ppl
{
	void	*w;
	char	*a;
	char	*s;
	char	*d;
}			t_ppl;

typedef struct s_game
{
	t_map			map;
	void			*mlx_ptr;
	void			*win_ptr;
	void			*path;
	void			*wall;
	void			*exit;
	t_ppl			dawn;
	int				moves;
	void			*cltb;
}			t_game;

/* PROTOTYPES */
/* ft_checkMap.c */
void	ft_northandsouth(t_map	*map);
void	ft_westandeast(t_map *map);
void	ft_checkelems(t_map *map);
void	ft_floodfill(char **mapcopy, int x, int y);
void	ft_checkchecks(t_map *map);
/* ft_checkMapUtils.c */
void	ft_counters(t_map *map, int x, int y);
char	**ft_mtxdup(t_map *map);
void	ft_afterff(t_map *map, char **mapcopy);
/* ft_drawMap.c */
void	ft_wpe(t_map *map, t_game *game, int x, int y);
void	ft_draw_sprites(t_map *map, t_game *game);
/* ft_handleEnds.c */
void	ft_freematrix(char **matrix);
void	ft_exit(t_map *map, int n);
/* ft_initMap.c */
char	**ft_creatematrix(char **argv);
void	ft_getmeasurements(t_map *map);
/* ft_initMLX.c */
void	ft_draw_map(t_map *map, t_game *game);
int		ft_keys(int key, t_game *game);
void	ft_hooks(t_game *game);
void	ft_mlxinit(t_map *map, t_game *game);
/* ft_initSprites.c */
void	*ft_create(t_game *game, char *path);
void	ft_upload_misc(t_game *game);
void	ft_upload_p(t_game *game);
void	ft_upload_all(t_game *game);
/* ft_loopMap.c */
void	ft_redraw_ws(t_map *map, t_game *game, int x, int y);
void	ft_redraw_ad(t_map *map, t_game *game, int x, int y);
int		ft_redrawinloop(t_game *game);
/* ft_movePlayer.c */
void	ft_up(t_game *game, t_map *map);
void	ft_left(t_game *game, t_map *map);
void	ft_down(t_game *game, t_map *map);
void	ft_right(t_game *game, t_map *map);
/* ft_termSprites.c */
void	ft_unload_misc(t_game *game);
void	ft_unload_p(t_game *game);
void	ft_unload_all(t_game *game);
/* ft_walkPlayer.c */
void	ft_walk_up(t_game *game, int x, int y);
void	ft_walk_left(t_game *game, int x, int y);
void	ft_walk_down(t_game *game, int x, int y);
void	ft_walk_right(t_game *game, int x, int y);
/* main.c */
void	ft_print_mtx(t_map *map);
int		ft_end(t_game *game, int n);

#endif
