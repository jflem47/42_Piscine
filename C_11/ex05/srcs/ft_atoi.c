/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:19:06 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/28 18:49:21 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

int	ft_atoi(char *str)
{	
	int	c;
	int	signe;
	int	res;

	c = 0;
	signe = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			signe *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * signe);
}
