/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:19:52 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/01 11:45:37 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
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
	return (&dest[counter]);
}

int	find_size(int nbarrs, char **strs)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (i < nbarrs)
	{
		res += ft_strlen(strs[i]);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		totalspace;
	int		i;
	char	*current;

	if (size == 0)
		return ("");
	totalspace = find_size(size, strs);
	totalspace += size;
	res = (char *) malloc(totalspace);
	current = ft_strcpy(res, strs[0]);
	*current = *sep;
	current++;
	i = 1;
	while (i < size)
	{
		current = ft_strcpy(current, strs[i]);
		if (i != size - 1)
			*current = *sep;
		i++;
		current++;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *strs[] = { "salut", "mec", "vive", "la", "piscine!" };
// 	char *res;
// 	char sep = '*';

// 	res = ft_strjoin(5, strs, &sep);
// 	printf("new string: %s", res);
// }
