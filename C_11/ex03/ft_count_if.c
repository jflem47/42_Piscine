/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:10:34 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 17:35:20 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*));
//int	ft_strcmp(char *s1, char *s2);

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
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
// 	char *tab[] = {"le", "chat", "chat", "ca va?"};
// 	int res = ft_count_if(tab, 4, &return1);
// 	printf("%i\n", res);
// 	return (0);
// }
