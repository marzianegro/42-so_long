/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:50:24 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The  memchr()  function scans the initial n bytes of the memory area 
	pointed to by s for the first instance of c. Both c and the bytes of the 
	memory area pointed to by s are interpreted as unsigned char.
    
	RETURN VALUE
	The memchr() and memrchr() functions return a pointer to the matching 
	byte or NULL if the character does not occur in the given memory area.
*/

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	uc;

	i = 0;
	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (*ptr == uc)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
