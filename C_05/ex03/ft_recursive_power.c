/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:05:43 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 18:38:17 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	else if (power > 1)
		return (n * ft_recursive_power(n, power - 1));
	else if (power == 0)
		return (1);
	else
		return (n);
}

// #include <stdio.h>
// int main(void)
// {
// 	int pui = -2;
// 	int base = 2;

// 	printf("%i puissance %i: %i", base, pui, ft_recursive_power(base, pui));
// }
