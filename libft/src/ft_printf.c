/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:39 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 22:23:37 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_c(va_arg(args, int));
	else if (format == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len += ft_print_voidptr(va_arg(args, unsigned long));
	else if (format == 'i' || format == 'd')
		len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned_nbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex((unsigned int)va_arg(args, int), format);
	else if (format == '%')
		len += ft_print_percent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len += ft_print_c(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
