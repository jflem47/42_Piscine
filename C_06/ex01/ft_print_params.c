/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:38:30 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 10:54:54 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	if (argc == 1)
		return (0);
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
