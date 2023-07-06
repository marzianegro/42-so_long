/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:52:37 by mnegro            #+#    #+#             */
/*   Updated: 2022/10/11 16:26:54 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION
    Checks for any printable character including space.

    RETURN VALUE
    The  values  returned  are  nonzero  if  the character c falls into the 
    tested class, and zero if not.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
