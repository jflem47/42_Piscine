/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:34:20 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 14:37:49 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void	ft_puterror(char *str);
void	ft_putstr(char *str);

int	ft_open_file(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(str);
		ft_putstr(": ");
		ft_puterror(strerror(errno));
	}
	return (fd);
}
