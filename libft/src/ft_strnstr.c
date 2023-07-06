/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:09:46 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/06 17:22:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The strnstr() function locates the first occurrence of the 
	null-terminated string little in the string big, where not more than 
	len characters are searched. Characters that appear after a ‘\0’ 
	character are not searched. Since the strnstr() function is a FreeBSD 
	specific API, it should only be used when portability is not a concern.


	RETURN VALUE
	If little is an empty string, big is returned; if little occurs nowhere 
	in big, NULL is returned; otherwise a pointer to the first character of 
	the first occurrence of little is returned.
*/

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] != little[j])
			i++;
		else
		{
			while (little[j] && big[i] == little[j] && i < len)
			{
				i++;
				j++;
				if (little[j] == 0)
					return ((char *)&big[i - ft_strlen(little)]);
			}
		}
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}
