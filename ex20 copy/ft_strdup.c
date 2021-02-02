/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:29:32 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/13 16:19:59 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char		*ft_strdup(char *src)
{
	int		v;
	int		t;
	char	*m;

	v = 0;
	t = 0;
	while (src[v] != '\0')
	{
		v++;
	}
	m = (char *)malloc(sizeof(*m) * (v + 1));
	while (t < v)
	{
		m[t] = src[t];
		t++;
	}
	m[t] = '\0';
	return (m);
}
