/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:05:41 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/13 13:05:32 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	tocap;
	int	c;

	tocap = 1;
	c = 0;
	while (str[c] != '\0')
	{
		if (tocap == 1 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			tocap = 0;
		}
		else if (tocap == 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			tocap = 1;
		else
			tocap = 0;
		c++;
	}
	return (str);
}
