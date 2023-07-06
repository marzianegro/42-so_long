/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:46 by mnegro            #+#    #+#             */
/*   Updated: 2022/12/08 11:29:47 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/* HEADER FILES */
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/* PROTOTYPES */
/* ft_chars.c */
int			ft_print_c(int c);
int			ft_print_str(char *str);
int			ft_print_percent(void);

/* ft_hex.c */
int			ft_get_hex_len(unsigned int n);
int			ft_print_hex(unsigned int n, const char format);

/* ft_nbrs.c */
char		*ft_unsigned_itoa(unsigned int n);
int			ft_print_nbr(int n);
int			ft_print_unsigned_nbr(unsigned int n);

/* ft_printf.c */
int			ft_formats(va_list args, const char format);
int			ft_printf(const char *str, ...);

/* ft_voidPtr.c */
int			ft_get_voidptr_len(unsigned long n);
int			ft_print_voidptr(unsigned long n);

#endif
