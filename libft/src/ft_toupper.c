/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:54:42 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	These functions convert lowercase letters to uppercase, and vice versa.
	
	If  c is a lowercase letter, toupper() returns its uppercase equivalent, 
	if an uppercase representation exists in the current locale. Otherwise, 
	it returns c.
	
	If c is neither an unsigned char value nor EOF, the behavior of these 
	functions is undefined.
	
	RETURN VALUE
	The value returned is that of the converted letter, or c if the 
	conversion was not possible.
*/

#include "../libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
