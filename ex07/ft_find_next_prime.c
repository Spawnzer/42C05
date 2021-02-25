/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:07:03 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/25 11:44:47 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 0 || nb == 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
