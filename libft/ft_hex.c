/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funz2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:25 by mnegro            #+#    #+#             */
/*   Updated: 2022/12/08 11:29:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_get_hex_len(unsigned int n)
{
	unsigned int	nbr;
	int				len;

	nbr = n;
	len = 0;
	if (!nbr)
		len = 1;
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

static void	ft_put_hex(unsigned int n, const char format)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16, format);
		ft_put_hex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + 48), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nbr + 87), 1);
			else if (format == 'X')
				ft_putchar_fd((nbr + 55), 1);
		}
	}
}

int	ft_print_hex(unsigned int n, const char format)
{
	unsigned int	nbr;
	int				len;

	nbr = n;
	len = ft_get_hex_len(n);
	if (nbr == 0)
		write(1, "0", 1);
	else
		ft_put_hex(nbr, format);
	return (len);
}
