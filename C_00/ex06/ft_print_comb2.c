/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:02:40 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/02 17:28:00 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_nbrs(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
	if (!((a == 98) && (b == 99)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_nbrs(a, b);
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}