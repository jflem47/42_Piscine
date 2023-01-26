/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:19:58 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/19 13:13:36 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (n <= nb)
	{
		if (nb % n == 0 && n == nb)
			return (1);
		else if (nb % n == 0 && n < nb)
			return (0);
		n++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 12;

// 	printf("a = %i\nis_prime: %i\n", a, ft_is_prime(a));
// 	return (0);
// }