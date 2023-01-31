/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:53:00 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 17:06:08 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = (int *) malloc(length * sizeof(int));
	if (!res)
		return (0);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

// int ft_addone(int a)
// {
// 	return (a + 1);
// }

// #include <stdio.h>
// int main(void)
// {
// 	int tab[10];
// 	int i = 0;
// 	int count = 10;
// 	while (i < 10)
// 	{
// 		tab[i] = count;
// 		i++;
// 		count++;
// 	}
// 	printf("before map: ");
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%i ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("after map: ");
// 	int *tab1;
// 	tab1 = ft_map(tab, 10, &ft_addone);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%i ", tab1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
