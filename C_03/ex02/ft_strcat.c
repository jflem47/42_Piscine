/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:28:06 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/15 11:12:05 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char str[200];
// 	char tocopy[] = "mon lapin";
// 	int i;

// 	char temp_str[] = "la vie est belle ";
// 	i = 0;

// 	while (temp_str[i] != '\0')
// 	{
// 		str[i] = temp_str[i];
// 		i++;
// 	}
// 	str[i] = '\0';

// 	ft_strcat(str, tocopy);
// 	printf("%s", str);
// }
