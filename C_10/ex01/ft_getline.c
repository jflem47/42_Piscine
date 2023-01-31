/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:07:22 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 14:37:38 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void	ft_getline(void)
{
	char	buff[30000];
	int		i;
	int		ret;

	while (1)
	{
		i = 0;
		ret = read(0, buff, sizeof(buff));
		write(1, &buff, ret);
	}
}
