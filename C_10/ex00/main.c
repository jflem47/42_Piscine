/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:34:01 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/02 17:31:35 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 28000

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE];

	if (argc == 1 || argc > 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 20);
		if (argc > 2)
			write(2, "Too many arguments.\n", 21);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 19);
		return (1);
	}
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
	return (0);
}
