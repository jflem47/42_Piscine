/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:24:26 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/30 16:34:00 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	while (begin_list != NULL)
	{
		list_ptr = begin_list;
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			return (list_ptr);
		}
		begin_list = begin_list->next;
	}
	return (NULL);
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

// 	printf("Before foreach: ");
// 	while (current != NULL)
// 	{
// 		printf("%s ", current->data);
// 		fflush(stdout);
// 		current = current->next;
// 	}
// 	void (*fptr)(void *);
// 	int (*cmpptr)();
// 	cmpptr = ft_strcmp;
// 	printf("\n");
// 	printf("After find: ");
// 	printf("%s", ft_list_find(begin, "chat", cmpptr)->data);
// 	return (0);
// }
