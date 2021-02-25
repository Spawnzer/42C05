/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 07:17:31 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/25 07:28:16 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int rep;

	rep = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		rep = rep * nb;
	return (rep);
}
