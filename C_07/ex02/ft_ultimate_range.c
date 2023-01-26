/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:23:24 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/21 17:15:05 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	*ft_range(int min, int max)
{
	int	range;
	int	*dest;
	int	c;

	range = max - min;
	c = 0;
	dest = (int *) malloc(range * 4);
	if (dest == NULL)
		return (dest);
	while (min < max)
	{
		dest[c] = min;
		min++;
		c++;
	}
	return (dest);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	return (max - min);
}

// #include <stdio.h>
// int main(void)
// {
// 	int *dest;
// 	int res;

// 	res = ft_ultimate_range(&dest, 20, 10);
// 	printf("range: %i\n", res);
// 	return (0);
// }