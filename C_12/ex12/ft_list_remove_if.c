/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:34:56 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 15:32:27 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *));

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*list_ptr;
	t_list	*prev;

	list_ptr = *begin_list;
	if ((*cmp)(list_ptr->data, data_ref) == 0 && list_ptr != NULL)
	{
		(*begin_list) = list_ptr->next;
		(*free_fct)(list_ptr->data);
		free(list_ptr);
		list_ptr = (*begin_list);
		prev = (*begin_list);
	}
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			prev->next = list_ptr->next;
			(*free_fct)(list_ptr->data);
			free(list_ptr);
			list_ptr = prev;
		}
		prev = list_ptr;
		list_ptr = list_ptr->next;
	}
}

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

// void ft_free(void *data)
// {
//     data = NULL;
// }

// #include <stdio.h>
// #include "../ex03/ft_list_last.c"
// #include "../ex00/ft_create_elem.c"
// #include "../ex04/ft_list_push_back.c"
// int main(void)
// {
// 	t_list *begin;
// 	t_list *current;

// 	void *ptr1;
// 	void *ptr2;
// 	void *ptr3;
// 	void *ptr4;
// 	void *ptr5;

// 	char a[] = "le";
// 	char b[] = "chat";
// 	char c[] = "est";
// 	char d[] = "noir";
// 	char e[] = "FIN";

// 	ptr1 = &a;
// 	ptr2 = &b;
// 	ptr3 = &c;
// 	ptr4 = &d;
// 	ptr5 = &e;

// 	begin = ft_create_elem(ptr1);
// 	ft_list_push_back(&begin, ptr2);
// 	ft_list_push_back(&begin, ptr3);
// 	ft_list_push_back(&begin, ptr4);
// 	ft_list_push_back(&begin, ptr5);

// 	current = begin;

// 	printf("Before remove if: ");
// 	while (current != NULL)
// 	{
// 		printf("%s ", current->data);
// 		fflush(stdout);
// 		current = current->next;
// 	}
// 	void (*fptr)(void *);
// 	int (*cmpptr)();
// 	fptr = ft_free;
// 	cmpptr = ft_strcmp;
// 	printf("\n");
// 	ft_list_remove_if(&begin, "le", cmpptr, fptr);
// 	current = begin;
// 	printf("After  remove if: ");
// 	while (current != NULL)
// 	{
// 		printf("%s ", current->data);
// 		fflush(stdout);
// 		current = current->next;
// 	}
// 	return (0);
// }
