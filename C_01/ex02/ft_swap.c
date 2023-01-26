/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:26:24 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/11 18:36:08 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempb;
	*b = tempa;
}

// int	main(void)
// {
// 	int	*aptr;
// 	int	*bptr;
// 	int	a;
// 	int	b;

// 	a = '1';
// 	b = '2';
// 	aptr = &a;
// 	bptr = &b;
// 	ft_swap(aptr, bptr);
// 	write(1, &a, 1);
// 	write(1, &b, 1);
// }
