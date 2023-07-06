# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 23:11:39 by mnegro            #+#    #+#              #
#    Updated: 2023/07/06 22:23:04 by mnegro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### PHONY TARGET ###
.PHONY: all clean fclean re

### SILENT TARGET ###
.SILENT:

### VARIABLES (DEFINITION) ###
NAME = libft
NAME_ARC = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -c -g
RM = rm -f

AR = ar
ARFLAGS = -c -r -s

#### TARGETS ####
FL_SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
			ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
			ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
			ft_substr.c ft_tolower.c ft_toupper.c \
			ft_chars.c ft_hex.c ft_nbrs.c ft_printf.c ft_voidPtr.c
DIRSRCS = src/
SRCS = ${addprefix ${DIRSRCS},${FL_SRCS}}

FL_OBJS = ${FL_SRCS:.c=.o}
DIROBJS = obj/
OBJS = ${addprefix ${DIROBJS},${FL_OBJS}}

### (EXPLICIT) RULES ###
${DIROBJS}%.o: ${DIRSRCS}%.c
	${CC} ${CFLAGS} -c $< -o $@
	
${NAME}: ${OBJS}
	${AR} ${ARFLAGS} ${NAME_ARC} ${OBJS}
	@echo "Rule '${GREEN}all${DEF_COLOR}' for mandatory & bonus ${NAME} executed successfully!"

all:	${NAME}

clean:	
	${RM} ${OBJS}
	@echo "Rule '${GREEN}clean${DEF_COLOR}' for ${NAME} executed successfully!"

fclean:
	${RM} ${OBJS} ${NAME} ${NAME_ARC}
	@echo "Rule '${GREEN}fclean${DEF_COLOR}' for ${NAME} executed successfully!"

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
