/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:15:10 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/28 18:03:05 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

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
