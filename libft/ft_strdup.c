/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <mnegro@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:32:22 by mnegro            #+#    #+#             */
/*   Updated: 2022/11/07 08:27:41 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The strdup() function returns a pointer to a new string which is a 
	duplicate of the string s. Memory for the new string is obtained with 
	malloc(3), and can be freed with free(3).

	RETURN VALUE
	On success, the strdup() function returns a pointer to the duplicated 
	string. It returns NULL if insufficient memory was available, with 
	errno set to indicate the cause of the error.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
