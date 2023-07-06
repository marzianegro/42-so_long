/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funz3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:07:40 by mnegro            #+#    #+#             */
/*   Updated: 2022/12/16 08:07:41 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_get_voidptr_len(unsigned long n)
{
	unsigned long	nbr;
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

static void	ft_put_voidptr(unsigned long n, const char format)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr >= 16)
	{
		ft_put_voidptr(nbr / 16, format);
		ft_put_voidptr(nbr % 16, format);
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

int	ft_print_voidptr(unsigned long n)
{
	int	len;

	len = 0;
	if ((void *)n == NULL)
	{
		write(1, "(nil)", 5);
		len = 5;
	}
	else
	{
		write(1, "0x", 2);
		ft_put_voidptr(n, 'x');
		len += ft_get_voidptr_len(n) + 2;
	}
	return (len);
}
