/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:38:30 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/18 15:53:14 by jlemieux         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' || s2[c] != '\0')
	{
		if (s1[c] > s2[c])
		{
			return (1);
		}
		if (s1[c] < s2[c])
		{
			return (-1);
		}
		c++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

void	sort_array(char **array, int count)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < count)
	{
		j = i;
		while (j > 0 && ft_strcmp(array[j - 1], array[j]) > 0)
		{
			temp = array[j - 1];
			array[j - 1] = array[j];
			array[j] = temp;
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		c;
	int		i;
	int		j;

	c = 1;
	j = 1;
	i = 1;
	if (argc == 1)
		return (0);
	sort_array(argv + 1, argc - 1);
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
