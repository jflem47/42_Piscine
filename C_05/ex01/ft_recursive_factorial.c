/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:42:04 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 17:59:08 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	int fact;
// 	int a;

// 	a = 6;
// 	fact = ft_recursive_factorial(a);
// 	printf("Factorielle de %i: %i\n", a, fact);
// 	return (0);
// }
