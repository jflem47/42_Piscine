/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:44:18 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/16 12:47:05 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		d = 0;
		while (str[c + d] == to_find[d] && str[c + d] != '\0')
		{
			if (to_find[d + 1] == '\0')
				return (&str[c]);
			d++;
		}
		c++;
	}
	return (0);
}

int main(void)
{
	char str[] = "la nostalgie du temps";
	char find[] = "algie";
	char find1[] = "u temp";
	char find2[] = "";
	char find3[] = "panda";

	char *res;
	char *res1;
	char *res2;
	char *res3;

	res = ft_strstr(str, find);
	res1 = ft_strstr(str, find1);
	res2 = ft_strstr(str, find2);
	res3 = ft_strstr(str, find3);
}
