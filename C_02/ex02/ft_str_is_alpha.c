≠≠≠≠≠/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:08:10 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/12 16:27:44 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	res;
	int	counter;

	res = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			counter++;
			continue ;
		}
		else if (str[counter] >= 'a' && str[counter] <= 'z')
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
