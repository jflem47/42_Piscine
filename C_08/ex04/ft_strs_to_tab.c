/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:28:17 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 15:38:55 by jlemieux         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ntab;
	int			i;

	i = 0;
	ntab = malloc((ac + 1) * sizeof(t_stock_str));
	if (ntab == NULL)
		return (NULL);
	while (i < ac)
	{
		ntab[i].str = av[i];
		ntab[i].copy = ft_strdup(av[i]);
		ntab[i].size = ft_strlen(av[i]);
		i++;
	}
	ntab[i].str = 0;
	ntab[i].copy = 0;
	return (ntab);
}
