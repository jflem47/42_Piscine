/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:15:10 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/12 11:30:29 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	char	towrite;

	while (*str != '\0')
	{
		towrite = *str;
		write(1, &towrite, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "La piscine est chaude";
// 	ft_putstr(str);
// 	return (0);
// }
