/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:49:08 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 14:06:41 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*res;

	res = ft_create_elem(data);
	if (!begin_list)
		*begin_list = res;
	else
	{
		res->next = *begin_list;
		*begin_list = res;
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*first;
	int		i;

	first = ft_create_elem(strs[0]);
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&first, strs[i]);
		i++;
	}
	return (first);
}

// #include <stdio.h>
// #include "../ex03/ft_list_last.c"
// #include "../ex00/ft_create_elem.c"
// int main(void)
// {
// 	char *strs[] = {"first", "test1", "test2", "test3", "expected"};
// 	t_list *begin = ft_list_push_strs(5, strs);
// 	printf("%s\n", begin->data);
// 	return (0);
// }