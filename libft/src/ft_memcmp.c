/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:18:47 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The memcmp() function compares the first n bytes (each interpreted as 
	unsigned char) of the memory areas s1 and s2.
	
	RETURN VALUE
	The  memcmp() function returns an integer less than, equal to, or 
	greater than zero if the first n bytes of s1 is found, respectively, 
	to be less than, to match, or be greater than the first n bytes of s2.
	
	For a nonzero return value, the sign is determined by the sign of the 
	difference between the first pair of bytes (interpreted as unsigned 
	char) that differ in s1 and s2.
	
	If n is zero, the return value is zero.
*/

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = s1;
	ptr2 = s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && ptr1[i] == ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
