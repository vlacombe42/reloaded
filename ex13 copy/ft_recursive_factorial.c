/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:44:21 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/20 12:55:25 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int f;

	if (nb < 0 || nb > 12)
	{
		f = 0;
	}
	else if (nb == 0 || nb == 1)
	{
		f = 1;
	}
	else
	{
		f = nb;
		f = f * ft_recursive_factorial(f - 1);
	}
	return (f);
}
