/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:14:09 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The  strcmp()  function  compares  the  two  strings  s1 and s2. The 
	locale is not taken into account (for a locale-aware comparison, see 
	strcoll(3)).  It returns an integer less than, equal to, or greater 
	than zero if s1 is found, respectively, to be less than, to match, or 
	be greater than s2.
	
	The strncmp() function is similar, except it compares only the first 
	(at most) n bytes of s1 and s2.

	RETURN VALUE
	The strcmp() and strncmp() functions return an integer less than, 
	equal to, or greater than zero if s1 (or the first n bytes thereof) 
	is found, respectively, to be less than, to match, or be greater than 
	s2.
*/

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
