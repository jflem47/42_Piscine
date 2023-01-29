/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:44 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/28 19:12:52 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ft_doop(int a, int b, int (**f)(int, int), char op)
{
	if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	else if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	else if (op == '+')
		ft_putnbr(f[0](a, b));
	else if (op == '-')
		ft_putnbr(f[1](a, b));
	else if (op == '*')
		ft_putnbr(f[2](a, b));
	else if (op == '/')
		ft_putnbr(f[3](a, b));
	else if (op == '%')
		ft_putnbr(f[4](a, b));
}

int	main(int argc, char **argv)
{
	int	(*operations[5])(int, int);
	int	a;
	int	b;

	if (argc != 4)
		return (0);
	operations[0] = ft_add;
	operations[1] = ft_sub;
	operations[2] = ft_multi;
	operations[3] = ft_div;
	operations[4] = ft_mod;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_doop(a, b, operations, argv[2][0]);
	ft_putstr("\n");
	return (0);
}
