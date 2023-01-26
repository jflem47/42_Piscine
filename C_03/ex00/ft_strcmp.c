/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:11:24 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/15 16:58:21 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

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

// int main(void)
// {
// 	char *str;
// 	char *str1;
// 	char *str2;

// 	str = "0123456789";
// 	str1 = "yo daw";
// 	str2 = "yo dawg";
// 	printf("Diff value = %d \n", ft_strcmp(str, str1));
// 	printf("Diff value = %d \n", ft_strcmp(str1, str2));
// }
