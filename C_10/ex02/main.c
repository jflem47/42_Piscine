/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:35:09 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/26 14:35:10 by jlemieux         ###   ########.fr       */
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
int		ft_atoi(char *str);
char	*ft_get_tail(char *buf, int ret, int offset);

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		cl;
	char	buf[BUFF_SIZE + 1];
	int		offset;

	(void) argc;
	offset = ft_atoi(argv[2]);
	fd = ft_open_file(argv[3]);
	ret = read(fd, buf, BUFF_SIZE);
	if (ret == -1)
		ft_puterror(strerror(errno));
	buf[ret] = '\0';
	ft_putstr(ft_get_tail(buf, ret, offset));
	cl = close(fd);
	if (cl != 0)
		ft_puterror(strerror(errno));
	return (0);
}
