/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:56:52 by mnegro            #+#    #+#             */
/*   Updated: 2022/10/17 08:56:59 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	Allocates (with malloc(3)) and returns a substring from the string ’s’. 
	The substring begins at index ’start’ and is of maximum size ’len’.

	RETURN VALUE
	The substring. NULL if the allocation fails.
*/

#include "libft.h"

static size_t	ft_min(size_t val1, size_t val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			min_val;
	char			*substr;

	if (start > ft_strlen(s))
	{
		substr = (char *)ft_calloc(1, sizeof(char));
		if (!substr)
			return (NULL);
		return (substr);
	}
	min_val = ft_min((ft_strlen(s) - start), len);
	substr = (char *)ft_calloc((min_val + 1), sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], ++min_val);
	return (substr);
}
