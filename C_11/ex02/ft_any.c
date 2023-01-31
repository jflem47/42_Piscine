/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:59:29 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 17:24:25 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*));
//int	ft_strcmp(char *s1, char *s2);

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

// int return1(char *a)
// {
// 	char *b = "chat";
// 	if (ft_strcmp(a, b) == 0)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	c;

// 	c = 0;
// 	while (s1[c] != '\0' || s2[c] != '\0')
// 	{
// 		if (s1[c] > s2[c])
// 		{
// 			return (1);
// 		}
// 		if (s1[c] < s2[c])
// 		{
// 			return (-1);
// 		}
// 		c++;
// 	}
// 	return (0);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char *tab[] = {"salut", "le", "chien", "ca va?", NULL};
// 	int res = ft_any(tab, &return1);
// 	printf("%i\n", res);
// 	return (0);
// }
