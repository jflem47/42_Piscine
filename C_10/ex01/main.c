/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:33:47 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/26 14:33:48 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUFF_SIZE 3000

void	ft_putstr(char *str);
void	ft_puterror(char *str);
int		ft_open_file(char *str);

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		cl;
	int		i;
	char	buf[BUFF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		fd = ft_open_file(argv[i]);
		ret = read(fd, buf, BUFF_SIZE);
		if (ret != 0)
			ft_puterror(strerror(errno));
		buf[ret] = '\0';
		ft_putstr(buf);
		cl = close(fd);
		if (cl != 0)
			ft_puterror(strerror(errno));
		i++;
	}
	return (0);
}
