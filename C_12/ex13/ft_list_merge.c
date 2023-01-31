/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:33:24 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 15:43:17 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	while (current->next)
	{
		current = current->next;
	}
	current->next = begin_list2;
}

// #include <stdio.h>
// #include "../ex03/ft_list_last.c"
// #include "../ex00/ft_create_elem.c"
// #include "../ex05/ft_list_push_strs.c"
// int main(void)
// {
// 	char *strs[] = {"last", "test3", "test2", "test1", "first"};
// 	char *strs2[] = {"yes", "lapin", "mon", "salut"};
// 	t_list *begin1 = ft_list_push_strs(5, strs);
// 	t_list *begin2 = ft_list_push_strs(4, strs2);
// 	ft_list_merge(&begin1, begin2);
// 	while (begin1)
// 	{
// 		printf("%s ", begin1->data);
// 		begin1 = begin1->next;
// 	}
// 	return (0);
// }
