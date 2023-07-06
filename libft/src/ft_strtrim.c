/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:30:08 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	Allocates (with malloc(3)) and returns a copy of ’s1’ with the 
	characters specified in ’set’ removed from the beginning and the end 
	of the string.

	RETURN VALUE
	The trimmed string. NULL if the allocation fails.
*/

#include "../libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed_str;

	trimmed_str = NULL;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		trimmed_str = (char *)malloc((j - i + 1) * sizeof(char));
		if (trimmed_str)
			ft_strlcpy(trimmed_str, &s1[i], j - i + 1);
	}
	return (trimmed_str);
}
