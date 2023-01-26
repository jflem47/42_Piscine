/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:08:43 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 16:27:09 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	range;
	int	*dest;
	int	c;

	if (min >= max)
	{
		dest = NULL;
		return (dest);
	}
	range = max - min;
	c = 0;
	dest = (int *) malloc(range * 4);
	while (min < max)
	{
		dest[c] = min;
		min++;
		c++;
	}
	return (dest);
}

// int main(void)
// {
// 	int *ints;

// 	ints = ft_range(10, 20);
// 	return (0);
// }