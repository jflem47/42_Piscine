/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:04:21 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/19 11:20:57 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		else if (n >= 46341)
			return (0);
		else
			n++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int n;

// 	n = 144;
// 	printf("n = %i\nsqrt = %i\n", n, ft_sqrt(n));
// 	return (0);	
// }
