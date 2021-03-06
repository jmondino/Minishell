/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmondino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:57:55 by jmondino          #+#    #+#             */
/*   Updated: 2019/09/23 15:08:05 by jmondino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_tab(char **arr)
{
	int		i;

	i = -1;
	if (arr)
	{
		while (arr[++i])
			ft_memdel((void **)&arr[i]);
		ft_memdel((void **)&arr);
	}
}
