/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:52:10 by mnegro            #+#    #+#             */
/*   Updated: 2022/10/11 16:25:59 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION
    Checks  for an alphabetic character; in the standard "C" locale, it is 
    equivalent to (isupper(c) ||  islower(c)).   In  some  locales, there may 
    be additional characters for which isalpha() is true—letters which are 
    neither uppercase nor lowercase.

    RETURN VALUE
    The  values  returned  are  nonzero  if  the character c falls into the 
    tested class, and zero if not.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
