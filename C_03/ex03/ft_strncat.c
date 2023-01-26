/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:31:31 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/15 16:48:25 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0' && i < nb)
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

// 	ft_strncat(str, tocopy, 5);
// 	printf("%s", str);
// }
