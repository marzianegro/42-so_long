/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:26:16 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The  strchr() function returns a pointer to the first occurrence of the
	character c in the string s.
	
	RETURN VALUE
	The strchr() and strrchr() functions return a pointer  to  the  matched
	character  or NULL if the character is not found.  The terminating null
	byte is considered part of the string, so that if  c  is  specified  as
	'\0', these functions return a pointer to the terminator.
*/

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == '\0' && (char)c == s[i])
		return ((char *)(s + i));
	return (NULL);
}
