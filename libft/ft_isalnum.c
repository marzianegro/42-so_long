/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:51:54 by mnegro            #+#    #+#             */
/*   Updated: 2022/10/11 16:25:34 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION
    Checks for an alphanumeric character; it is equivalent to (isalpha(c) || 
    isdigit(c)).

    RETURN VALUE
    The  values  returned  are  nonzero  if  the character c falls into the 
    tested class, and zero if not.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
