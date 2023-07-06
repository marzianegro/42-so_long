# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 11:30:06 by mnegro            #+#    #+#              #
#    Updated: 2023/07/06 22:28:22 by mnegro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### PHONY TARGET ###
.PHONY: all clean fclean bonus libft re

### SILENT TARGET ###
.SILENT:

### VARIABLES (DEFINITION) ###
NAME = so_long
NAME_BNS = so_long_bonus
NAME_ARC = libftsolong.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

MLXFLAGS = -lmlx -lXext -lX11 -lm

#### TARGETS (MANDATORY) ####
FL_SRCS = ft_checkMap.c ft_checkMapUtils.c ft_drawMap.c ft_handleEnds.c \
			ft_initMap.c ft_initMLX.c ft_initSprites.c ft_loopMap.c \
			ft_movePlayer.c ft_termSprites.c ft_walkPlayer.c main.c
DIRSRCS = src/
SRCS = ${addprefix ${DIRSRCS},${FL_SRCS}}

FL_OBJS = ${FL_SRCS:.c=.o}
DIROBJS = obj/
OBJS = ${addprefix ${DIROBJS},${FL_OBJS}}

#### TARGETS (BONUS) ####
BNS_FL_SRCS = ft_checkMap_bonus.c ft_checkMapUtils_bonus.c ft_drawMap_bonus.c \
				ft_handleEnds_bonus.c ft_initMap_bonus.c ft_initMLX_bonus.c \
				ft_initSprites_bonus.c ft_loopMap_bonus.c ft_movePlayer_bonus.c \
				ft_termSprites_bonus.c ft_walkPlayer_bonus.c main_bonus.c
BNS_DIRSRCS = bonus/src/
BNS_SRCS = ${addprefix ${BNS_DIRSRCS},${BNS_FL_SRCS}}

BNS_FL_OBJS = ${BNS_FL_SRCS:.c=.o}
BNS_DIROBJS = bonus/obj/
BNS_OBJS = ${addprefix ${BNS_DIROBJS},${BNS_FL_OBJS}}

#### TARGETS (ALL) ####
DIRARC = arc/
ARC = ${addprefix ${DIRARC},${NAME_ARC}}

INCLUDE = ./so_long.h
INCLUDE_BNS = ./so_long_bonus.h

MLX = minilibx-linux

### (EXPLICIT) RULES ###
${DIROBJS}%.o: ${DIRSRCS}%.c
	@echo "${YELLOW}Compiling:${WHITE} $< ${DEF_COLOR}"
	${CC} ${CFLAGS} -c $< -o $@

${BNS_DIROBJS}%.o: ${BNS_DIRSRCS}%.c
	@echo "${YELLOW}Compiling:${WHITE} $< ${DEF_COLOR}"
	${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

${NAME}: libft ${OBJS}
	cp libft/libft.a ${ARC}
	${CC} ${CFLAGS} ${OBJS} -I {MLX} -I {INCLUDE} -L ${DIRARC} -L ${MLX} ${MLXFLAGS} -o ${NAME} ${ARC} 
	@echo "Rule '${GREEN}all${DEF_COLOR}' for mandatory ${NAME} executed successfully!"

bonus:	${NAME_BNS}

${NAME_BNS}: libft ${BNS_OBJS}
	cp libft/libft.a ${ARC}
	${CC} ${CFLAGS} ${BNS_OBJS} -I {MLX} -I {INCLUDE_BNS} -L ${DIRARC} -L ${MLX} ${MLXFLAGS} -o ${NAME_BNS} ${ARC} 
	@echo "Rule '${GREEN}all${DEF_COLOR}' for bonus ${NAME} executed successfully!"

clean:
	${MAKE} -C libft clean
	${RM} ${OBJS} ${BNS_OBJS}
	@echo "Rule '${GREEN}clean${DEF_COLOR}' for ${NAME} executed successfully!"

fclean:
	${MAKE} -C libft fclean
	${RM} ${OBJS} ${BNS_OBJS} ${NAME} ${NAME_BNS} ${ARC}
	@echo "Rule '${GREEN}fclean${DEF_COLOR}' for ${NAME} executed successfully!"

libft:
	${MAKE} -C libft

re:	fclean all
	@echo "Rule '${GREEN}re${DEF_COLOR}' for ${NAME} executed successfully!"

### (BRIGHT) COLORS ###

DEF_COLOR = \033[0;39m
BLACK = \033[1;90m
RED = \033[1;91m
GREEN = \033[1;92m
YELLOW = \033[1;93m
BLUE = \033[1;94m
MAGENTA = \033[1;95m
CYAN = \033[1;96m
WHITE = \033[0;97m
