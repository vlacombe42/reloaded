/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:03:04 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/13 11:18:58 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		main(int argc, char **argv)
{
	int c;
	int d;

	c = 1;
	while (c < argc)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			ft_putchar(argv[c][d]);
			d++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}
