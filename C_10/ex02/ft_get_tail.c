/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:34:54 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/26 14:34:55 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_get_tail(char *buf, int ret, int offset)
{
	int		i;
	char	*res;

	i = offset;
	res = (char *) malloc(offset);
	while (i >= 0)
	{
		res[i] = buf[ret];
		i--;
		ret--;
	}
	return (res);
}
