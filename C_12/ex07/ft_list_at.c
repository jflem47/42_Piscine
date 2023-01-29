/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:42:59 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 14:55:26 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*res;
	int		i;

	i = 0;
	while (i < nbr - 1)
	{
		begin_list = begin_list->next;
		i++;
	}
	res = begin_list;
	return (res);
}

// #include <stdio.h>
// #include "../ex03/ft_list_last.c"
// #include "../ex00/ft_create_elem.c"
// #include "../ex05/ft_list_push_strs.c"
// int main(void)
// {
// 	char *strs[] = {"5", "4", "3", "2", "1"};
// 	t_list *begin = ft_list_push_strs(5, strs);
// 	printf("%s\n", ft_list_at(begin, 4)->data);
// 	return (0);
// }