/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:50:18 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 18:07:54 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	base;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	base = nb;
	while (i < power - 1)
	{
		nb = nb * base;
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// int main(void)
// {
// 	int pui = 2;
// 	int base = 10;

// 	printf("%i puissance %i: %i", base, pui, ft_iterative_power(base, pui));
// }
