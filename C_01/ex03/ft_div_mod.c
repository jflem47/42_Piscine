/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:37:39 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/11 18:50:17 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
// 	int	*divptr;
// 	int	*modptr;

// 	a = 10;
// 	b = 3;
// 	divptr = &div;
// 	modptr = &mod;
// 	ft_div_mod(a, b, divptr, modptr);
// 	write(1, &div, 1);
// 	write(1, &mod, 1);
// }
