/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:53:00 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/28 17:07:59 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
