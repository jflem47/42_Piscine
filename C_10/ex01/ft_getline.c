/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:07:22 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/02 17:30:27 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

void	ft_getline(void)
{
	char	buff[28000];
	int		ret;

	ret = 0;
	while (1)
	{
		ret = read(0, buff, sizeof(buff));
		if (ret == 0)
			return ;
		write(1, &buff, ret);
	}
}
