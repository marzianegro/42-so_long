/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:32:41 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The memset() function fills the first n bytes of the memory area pointed 
	to by s with the constant byte c.
	
	RETURN VALUE
	The memset() function returns a pointer to the memory area s.
*/

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (s);
}
