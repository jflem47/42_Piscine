/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:43:37 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/12 16:48:10 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	res;
	int	counter;

	res = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= '0' && str[counter] <= '9')
		{
			counter++;
			continue ;
		}
		else
		{
			res = 0;
			return (res);
		}
	}
	return (res);
}
