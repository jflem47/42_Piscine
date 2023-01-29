/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:27:33 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 14:55:44 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

// #include <stdio.h>
// #include "../ex01/ft_list_push_front.c"
// #include "../ex00/ft_create_elem.c"
// int main(void)
// {
// 	t_list *elem1 = ft_create_elem("first");
// 	ft_list_push_front(&elem1, "test");
// 	ft_list_push_front(&elem1, "test2");
// 	ft_list_push_front(&elem1, "test3");
// 	printf("%s\n", ft_list_last(elem1)->data);
// 	return (0);
// }