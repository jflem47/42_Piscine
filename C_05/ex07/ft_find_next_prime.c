/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:00:29 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/19 13:11:51 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

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

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	while (ft_is_prime(n) != 1)
	{
		n++;
	}
	return (n);
}

// #include <stdio.h>
// int main(void)
// {
// 	int a = 21;

// 	printf("a = %i\nnext prime = %i\n", a, ft_find_next_prime(a));
// 	return (0);
// }