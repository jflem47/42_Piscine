/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:15:54 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/28 19:43:04 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_tab(char **tab);

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;
	int		count;

	count = 0;
	while (tab[count])
		count++;
	i = 0;
	while (i < count)
	{
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], tab[j]) > 0)
		{
			temp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = temp;
			j--;
		}
		i++;
	}
}

// #include <unistd.h>
// void	ft_putstr(char *str)
// {
// 	char	towrite;

// 	while (*str != '\0')
// 	{
// 		towrite = *str;
// 		write(1, &towrite, 1);
// 		str++;
// 	}
// }

// int main(void)
// {
// 	char *strs[] = {"salut", "alain", "poli", "bebe", 
//						"chien", "poil", "albert", "Zach", NULL};
// 	ft_sort_string_tab(strs);

// 	int i = 0;
// 	while (strs[i])
// 	{
// 		ft_putstr(strs[i]);
// 		ft_putstr("\n");
// 		i++;
// 	}
// 	return (0);
// }