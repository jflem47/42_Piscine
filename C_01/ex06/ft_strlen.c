/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:31:32 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/12 11:50:30 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	char	tocount;
	int		counter;

	counter = 0;
	while (*str != '\0')
	{
		tocount = *str;
		counter++;
		str++;
	}
	return (counter);
}

// int	main(void)
// {
// 	char	*str;
// 	int		strlength;

// 	str = "La piscine est chaude";
// 	strlength = ft_strlen(str);
// 	return (0);
// }
