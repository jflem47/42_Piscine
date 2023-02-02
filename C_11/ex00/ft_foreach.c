/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:58:59 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 20:09:53 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-", 1);
// 		write(1, "2", 1);
// 		nb = 147483648;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb *= -1;
// 	}
// 	if (nb < 10)
// 	{
// 		nb += 48;
// 		write(1, &nb, 1);
// 		return ;
// 	}
// 	else
// 		ft_putnbr(nb / 10);
// 	ft_putnbr(nb % 10);
// }

// int main(void)
// {
// 	int tab[10];
// 	int i = 0;
// 	int count = 100;
// 	while (i < 10)
// 	{
// 		tab[i] = count;
// 		i++;
// 		count++;
// 	}
// 	ft_foreach(tab, 10, &ft_putnbr);
// 	return (0);
// }
