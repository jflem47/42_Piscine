/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:49:00 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/19 11:20:30 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		nb = ft_fibonacci(index - 1);
		nb = nb + ft_fibonacci(index - 2);
		return (nb);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int index = 4;

// 	printf("index %i: %i", index, ft_fibonacci(index));
// 	return (0);
// }
