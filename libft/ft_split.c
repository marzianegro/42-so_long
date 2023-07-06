/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:16:38 by mnegro            #+#    #+#             */
/*   Updated: 2022/11/07 08:19:34 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	Allocates (with malloc(3)) and returns an array of strings obtained by 
	splitting ’s’ using the character ’c’ as a delimiter. The array must end
	with a NULL pointer.
	
	RETURN VALUE
	The array of new strings resulting from the split. NULL if the 
	allocation fails
*/

#include "libft.h"

static int	ft_getcount(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		else if (*s != c && flag == 1)
		{
			count++;
			flag = 0;
		}
		s++;
	}
	if (!count)
		return (1);
	return (count + 1);
}

static int	ft_getlen(const char *s, char c, int ext_count)
{
	int	len;
	int	int_count;
	int	flag;

	len = 0;
	int_count = 0;
	flag = 1;
	while (*s)
	{
		if (*s == c)
			flag = 1;
		if (*s != c)
		{
			if (flag == 1)
			{
				int_count++;
				flag = 0;
			}
			if (*s != c && int_count == ext_count)
				len++;
		}
		s++;
	}
	return (len);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		str_i;
	int		len;
	char	**str_arr;

	str_arr = (char **)ft_calloc(ft_getcount(s, c), sizeof(char *));
	if (!str_arr)
		return (NULL);
	i = 0;
	str_i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = ft_getlen(s, c, (str_i + 1));
			str_arr[str_i] = ft_substr(s, i, len);
			str_i++;
			i += len;
		}
	}
	str_arr[str_i] = NULL;
	free((char *)s);
	return (str_arr);
}
