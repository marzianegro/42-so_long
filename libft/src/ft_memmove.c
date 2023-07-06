/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:33:35 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The  memmove() function copies n bytes from memory area src to memory 
	area dest. The memory areas may overlap: copying takes place as though 
	the bytes in src are first copied into a temporary array that does not 
	overlap src or dest, and the bytes are then copied from the temporary 
	array to dest.
	
	RETURN VALUE
	The memmove() function returns a pointer to dest.
*/

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptrdest;
	const char	*ptrsrc;

	i = n - 1;
	ptrdest = dest;
	ptrsrc = src;
	if (!src && !dest)
		return (dest);
	if (src < dest)
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i--;
		}
	}
	else
		ft_memcpy(ptrdest, ptrsrc, n);
	return (dest);
}
