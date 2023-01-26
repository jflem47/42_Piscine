/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:23:22 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 17:41:35 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	res = nb;
	i = nb - 1;
	while (i > 0)
	{
		res = res * i;
		i--;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	int fact;
// 	int a;

// 	a = 10;
// 	fact = ft_iterative_factorial(a);
// 	printf("Factorielle de %i: %i\n", a, fact);
// 	return (0);
// }
