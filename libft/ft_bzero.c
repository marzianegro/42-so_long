/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:38:35 by mnegro            #+#    #+#             */
/*   Updated: 2022/11/07 08:27:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The  bzero()  function  erases  the  data in the n bytes of the memory 
	starting at the location pointed to by s, by writing zeros (bytes 
	containing '\0') to that area.
	
	RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
