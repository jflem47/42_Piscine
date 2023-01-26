/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:28:17 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/26 13:28:19 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_len(char **strs, int strc)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < strc)
	{
		total += ft_strlen(strs[i]) * 2;
		total += 4;
		i++;
	}
	total += 1;
	return (total);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ntab;
	t_stock_str	current;
	int			i;

	i = 0;
	ntab = malloc(ft_total_len(av, ac));
	if (ntab == NULL)
		return (NULL);
	while (i <= ac)
	{
		if (i != ac)
		{
			current.str = av[i];
			current.copy = av[i];
			current.size = ft_strlen(av[i]);
			ntab[i] = current;
			i++;
		}
		else
		{
			current.str = 0;
			i++;
		}
	}
	return (ntab);
}
