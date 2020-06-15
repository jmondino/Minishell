/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmondino <jmondino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:03:36 by jmondino          #+#    #+#             */
/*   Updated: 2019/09/23 15:11:57 by jmondino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s1 && s2)
	{
		len = (ft_strlen(s1) + ft_strlen(s2));
		if (!(str = (char *)malloc(sizeof(char) * (len) + 1)))
			return (NULL);
		i = 0;
		len = -1;
		while (s1[++len])
		{
			str[i] = s1[len];
			i++;
		}
		len = 0;
		while (s2[len])
			str[i++] = s2[len++];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
