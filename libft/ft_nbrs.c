/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:51:23 by mnegro            #+#    #+#             */
/*   Updated: 2023/04/29 19:51:24 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_after_calloc(unsigned int n, unsigned int len, char *str)
{
	while (n)
	{
		--len;
		str[len] = ((n % 10) + 48);
		n /= 10;
	}
}

char	*ft_unsigned_itoa(unsigned int n)
{
	unsigned int	nbr;
	unsigned int	len;
	char			*str;

	len = 0;
	if (n == 0)
	{
		str = (char *)ft_calloc(2, 1);
		str[0] = 48;
		return (str);
	}
	nbr = n;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	str = (char *)ft_calloc((len + 1), 1);
	if (!str)
		return (NULL);
	ft_after_calloc(n, len, str);
	return (str);
}

int	ft_print_nbr(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(n);
	ft_print_str(nbr);
	len = ft_strlen(nbr);
	free(nbr);
	return (len);
}

int	ft_print_unsigned_nbr(unsigned int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_unsigned_itoa(n);
	ft_print_str(nbr);
	len = ft_strlen(nbr);
	free(nbr);
	return (len);
}
