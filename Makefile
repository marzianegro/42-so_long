# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 11:30:06 by mnegro            #+#    #+#              #
#    Updated: 2022/12/08 11:30:08 by mnegro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### PHONY TARGET ###
.PHONY: all clean fclean bonus libft re

### SILENT TARGET ###
.SILENT:

### VARIABLES (DEFINITION) ###
NAME = so_long
NAME_BONUS = so_long_bonus
NAME_ARC = libftsolong.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

MLXFLAGS = -lmlx -lXext -lX11 -lm

#### TARGETS (MANDATORY) ####
MSRCS = ft_checkMap.c ft_checkMapUtils.c ft_drawMap.c ft_handleEnds.c \
		ft_initMap.c ft_initMLX.c ft_initSprites.c ft_loopMap.c \
		ft_movePlayer.c ft_termSprites.c ft_walkPlayer.c main.c

MOBJS = ${MSRCS:.c=.o}
DIROBJS = obj/
OBJS = ${addprefix ${DIROBJS},${MOBJS}}

#### TARGETS (BONUS) ####
BSRCS = ft_checkMap_bonus.c ft_checkMapUtils_bonus.c ft_drawMap_bonus.c \
		ft_handleEnds_bonus.c ft_initMap_bonus.c ft_initMLX_bonus.c \
		ft_initSprites_bonus.c ft_loopMap_bonus.c ft_movePlayer_bonus.c \
		ft_termSprites_bonus.c ft_walkPlayer_bonus.c main_bonus.c
DIRSRCS = bonus/
BONUS_SRCS = ${addprefix ${DIRSRCS},${BSRCS}}

BOBJS = ${BONUS_SRCS:.c=.o}
DIROBJS = obj/
BONUS_OBJS = ${addprefix ${DIROBJS},${BOBJS}}

#### TARGETS (ALL) ####
DIRARC = arc/
ARC = ${addprefix ${DIRARC},${NAME_ARC}}

INCLUDE = ./so_long.h
INCLUDE_BONUS = ./so_long_bonus.h

MLX = minilibx-linux

### (EXPLICIT) RULES ###
${DIROBJS}%.o: %.c
	@echo "${YELLOW}Compiling:${WHITE} $< ${DEF_COLOR}"
	${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

${NAME}: libft ${OBJS}
	cp libft/libft.a ${ARC}
	${CC} ${CFLAGS} ${OBJS} -I {MLX} -I {INCLUDE} -L ${DIRARC} -L ${MLX} ${MLXFLAGS} -o ${NAME} ${ARC} 
	@echo "Rule 'all' for mandatory ${NAME} executed successfully!"

bonus:	${NAME_BONUS}

${NAME_BONUS}: libft ${BONUS_OBJS}
	cp libft/libft.a ${ARC}
	${CC} ${CFLAGS} ${BONUS_OBJS} -I {MLX} -I {INCLUDE_BONUS} -L ${DIRARC} -L ${MLX} ${MLXFLAGS} -o ${NAME_BONUS} ${ARC} 
	@echo "Rule 'all' for bonus ${NAME} executed successfully!"

clean:
	${MAKE} -C libft clean
	${RM} ${OBJS} ${BONUS_OBJS}
	@echo "Rule 'clean' for ${NAME} executed successfully!"

fclean: clean
	${MAKE} -C libft fclean
	${RM} ${NAME} ${NAME_BONUS} ${ARC}
	@echo "Rule 'fclean' for ${NAME} executed successfully!"

libft:
	${MAKE} -C libft

re:	fclean all
	@echo "Rule 're' for ${NAME} executed successfully!"

### (BRIGHT) COLORS ###

DEF_COLOR = \033[0;39m
BLACK = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[1;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
