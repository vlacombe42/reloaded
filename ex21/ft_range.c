/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:34:10 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/15 10:22:08 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tr;
	int v;
	int len;

	if (min >= max)
	{
		return (NULL);
	}
	v = 0;
	len = max - min;
	tr = (int*)malloc(sizeof(min) * (max - min));
	while (v < len)
	{
		tr[v] = min + v;
		v++;
	}
	return (tr);
}
