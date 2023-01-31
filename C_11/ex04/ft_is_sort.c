/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:38:48 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 17:41:55 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

// int is_sorted(int a, int b)
// {
// 	if (a < b)
// 		return (-1);
// 	if (a == b)
// 		return (0);
// 	if (a > b)
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>
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
// 	//tab[3] = 8;
// 	printf("%i\n", ft_is_sort(tab, 10, &is_sorted));
// 	return (0);
// }
