/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:17:07 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 14:53:42 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
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
// 	printf("%i\n", ft_list_size(elem1));
// 	return (0);
// }