/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:53:01 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 13:17:51 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

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

// #include <stdio.h>
// int main(void)
// {
// 	t_list *elem1 = ft_create_elem("first");
// 	ft_list_push_front(&elem1, "test");
// 	ft_list_push_front(&elem1, "test2");
// 	while (elem1)
// 	{
// 		printf("%s\n", (char *)elem1->data);
// 		elem1 = elem1->next;
// 	}
// 	return (0);
// }
