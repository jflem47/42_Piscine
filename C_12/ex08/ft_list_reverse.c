/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:56:29 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/30 14:26:41 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list);

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	prev = NULL;
	current = *begin_list;
	next = NULL;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}

// #include <stdio.h>
// #include "../ex03/ft_list_last.c"
// #include "../ex00/ft_create_elem.c"
// #include "../ex05/ft_list_push_strs.c"
// int main(void)
// {
// 	char *strs[] = {"5", "4", "3", "2", "1"};
// 	t_list *begin = ft_list_push_strs(5, strs);
// 	t_list *current = begin;
// 	printf("Before reverse: ");
// 	while (current != NULL)
// 	{
// 		printf("%s ", (char *)current->data);
// 		fflush(stdout);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	ft_list_reverse(&begin);
// 	printf("After reverse: ");
// 	while (begin)
// 	{
// 		printf("%s ", (char *)begin->data);
// 		fflush(stdout);
// 		begin = begin->next;
// 	}
// 	printf("\n");

// 	return (0);
// }
