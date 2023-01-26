/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:53:46 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/11 19:01:28 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*aptr;
// 	int	*bptr;

// 	a = 10;
// 	b = 3;
// 	aptr = &a;
// 	bptr = &b;
// 	ft_ultimate_div_mod(aptr, bptr);
// 	write(1, &a, 1);
// 	write(1, &b, 1);
// }
