/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_slashend.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmondino <jmondino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:14:29 by jmondino          #+#    #+#             */
/*   Updated: 2019/09/16 13:44:41 by jmondino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_len(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (s)
	{
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			count++;
			s++;
		}
	}
	return (count);
}

static size_t		ft_words(char const *s, char c)
{
	size_t	count;
	size_t	bool;

	count = 0;
	bool = 0;
	if (s)
	{
		while (*s)
		{
			if (*s == c)
			{
				s++;
				bool = 0;
			}
			else
			{
				if (bool == 0)
					count++;
				bool = 1;
				s++;
			}
		}
	}
	return (count);
}

char				**ft_strsplit_slashend(char const *s, char c)
{
	char	**tab;
	char	*str;
	size_t	i;
	size_t	j;

	if (!(tab = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (NULL);
	str = (char *)s;
	i = 0;
	while (i < ft_words(s, c))
	{
		if (!(tab[i] = (char *)malloc(sizeof(char) * (ft_len(str, c) + 2))))
			return (NULL);
		j = 0;
		while (*str == c)
			str++;
		while (*str != c && *str)
			tab[i][j++] = *str++;
		tab[i][j] = '/';
		tab[i][j + 1] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
