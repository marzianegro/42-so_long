/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:48:52 by mnegro            #+#    #+#             */
/*   Updated: 2022/10/11 16:27:09 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area 
	dest. The memory areas must not overlap. Use memmove(3) if the memory 
	areas do overlap.
	
	RETURN VALUE
	The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptrdest;
	const char	*ptrsrc;

	i = 0;
	ptrdest = dest;
	ptrsrc = src;
	if (!src && !dest)
		return (dest);
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
