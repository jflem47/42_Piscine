/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:27:26 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/30 15:37:49 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	while (begin_list != NULL)
	{
		list_ptr = begin_list;
		(*f)(list_ptr->data);
		begin_list = begin_list->next;
	}
}

// void ft_addone(void *a)
// {
// 	*(int *)a += 1;
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

// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = 4;
// 	int e = 5;

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

// 	printf("Before foreach: ");
// 	while (current != NULL)
// 	{
// 		printf("%i ", *(int *)current->data);
// 		fflush(stdout);
// 		current = current->next;
// 	}
// 	void (*fptr)(void *);
// 	fptr = ft_addone;
// 	printf("\n");
// 	ft_list_foreach(begin, fptr);
// 	printf("After foreach: ");
// 	while (begin)
// 	{
// 		printf("%i ", *(int *)begin->data);
// 		fflush(stdout);
// 		begin = begin->next;
// 	}
// 	printf("\n");

// 	return (0);
// }