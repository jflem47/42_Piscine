/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:57:11 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/12 19:02:09 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	res;
	int	counter;

	res = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 32 && str[counter] <= 126)
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
