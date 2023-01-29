/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:32:57 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 13:46:20 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*res;
	t_list	*last;

	res = ft_create_elem(data);
	last = *begin_list;
	while (last->next)
		last = last->next;
	last->next = res;
}

// #include <stdio.h>
// #include "../ex01/ft_list_push_front.c"
// #include "../ex03/ft_list_last.c"
// int main(void)
// {
// 	t_list *elem1 = ft_create_elem("first");
// 	ft_list_push_front(&elem1, "test");
// 	ft_list_push_front(&elem1, "test2");
// 	ft_list_push_front(&elem1, "test3");
// 	ft_list_push_back(&elem1, "LAST");
// 	printf("%s\n", ft_list_last(elem1)->data);
// 	return (0);
// }