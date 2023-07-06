/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:54:34 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	These functions convert lowercase letters to uppercase, and vice versa.
	
	If c is an uppercase letter, tolower() returns its lowercase equivalent, 
	if a lowercase representation exists in the current locale.  Otherwise, 
	it returns c.
	
	If c is neither an unsigned char value nor EOF, the behavior of these 
	functions is undefined.
	
	RETURN VALUE
	The value returned is that of the converted letter, or c if the 
	conversion was not possible.
*/

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
