/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:33:47 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/02 17:30:16 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUFF_SIZE 28000

void	ft_putstr(char *str);
void	ft_puterror(char *str);
int		ft_open_file(char *str, char *exec);
void	ft_getline(void);

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUFF_SIZE + 1];

	if (argc == 1)
		ft_getline();
	i = 1;
	while (i < argc)
	{
		fd = ft_open_file(argv[i], argv[0]);
		ret = read(fd, buf, BUFF_SIZE);
		if (ret != -1)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
			close(fd);
		}
		else
			return (1);
		i++;
	}
	return (0);
}
