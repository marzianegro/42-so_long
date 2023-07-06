/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:51:34 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	Allocates (with malloc(3)) and returns a string representing the 
	integer received as an argument. Negative numbers must be handled.
	
	RETURN VALUE
	The string representing the integer. NULL if the allocation fails.
*/

#include "../libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static void	ft_after_calloc(int n, int len, char *str)
{
	if (n < 0)
		str[0] = 45;
	while (n)
	{
		--len;
		str[len] = (ft_abs(n % 10) + 48);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		num;
	int		len;
	char	*str;

	len = 0;
	if (n == 0)
	{
		str = (char *)ft_calloc(2, 1);
		str[0] = 48;
		return (str);
	}
	num = n;
	while (num)
	{
		num /= 10;
		len++;
	}
	if (n < 0)
		len++;
	str = (char *)ft_calloc((len + 1), 1);
	if (!str)
		return (NULL);
	ft_after_calloc(n, len, str);
	return (str);
}
