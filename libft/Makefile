# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnegro <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 23:11:39 by mnegro            #+#    #+#              #
#    Updated: 2022/10/12 23:11:43 by mnegro           ###   ########.fr        #
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
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_chars.c ft_hex.c ft_nbrs.c ft_printf.c \
		ft_voidPtr.c

OBJS = ${SRCS:.c=.o}

### (EXPLICIT) RULES ###
${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${SRCS}
	${AR} ${ARFLAGS} ${NAME_ARC} ${OBJS}
	@echo "Rule 'all' for ${NAME} executed successfully!"

all:	${NAME}

clean:	
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME_ARC}

re:	fclean all
