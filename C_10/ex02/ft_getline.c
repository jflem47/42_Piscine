/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:07:22 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/02 17:30:55 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str);

void	ft_getline(int offset)
{
	char	buf[28000];
	int		bytes;
	int		n;

	n = 0;
	bytes = 0;
	while ((read(0, &buf[bytes], sizeof(buf))) > 0)
	{
		bytes += read(0, &buf[bytes], sizeof(buf));
	}
	ft_putstr(&buf[bytes - offset]);
}
