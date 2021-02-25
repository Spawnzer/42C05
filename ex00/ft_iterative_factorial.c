/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 06:57:19 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/25 07:09:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
		fact = fact * i++;
	return (fact);
}
