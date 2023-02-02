/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:25:43 by jlemieux          #+#    #+#             */
/*   Updated: 2023/02/01 11:45:25 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

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
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *) malloc(ft_strlen(src) * sizeof(char));
	ft_strcpy(dest, src);
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "string a copier";
// 	char *nstr;

// 	nstr = ft_strdup(str1);
// 	printf("str1: %s\n", str1);
// 	printf("nstr: %s\n", nstr);
// 	return (0);
// }