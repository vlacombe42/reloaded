/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:06:09 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/13 10:58:12 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char a);

int		ft_strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while ((s1[k] && s2[k] != '\0') && s1[k] == s2[k])
	{
		k++;
	}
	return (s1[k] - s2[k]);
}

void	afficher(char **argv)
{
	int v;
	int w;

	v = 1;
	while (argv[v] != 0)
	{
		w = 0;
		while (argv[v][w] != '\0')
		{
			ft_putchar(argv[v][w]);
			w++;
		}
		ft_putchar('\n');
		v++;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*test;

	a = 1;
	while (a < argc)
	{
		b = 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) < 0)
			{
				test = argv[a];
				argv[a] = argv[b];
				argv[b] = test;
			}
			b++;
		}
		a++;
	}
	afficher(argv);
}
