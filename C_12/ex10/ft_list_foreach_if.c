/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:38:31 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/30 16:23:18 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)());

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
							*data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	while (begin_list != NULL)
	{
		list_ptr = begin_list;
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			(*f)(list_ptr->data);
		}
		begin_list = begin_list->next;
	}
}

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	counter;

// 	counter = 0;
// 	while (src[counter] != '\0')
// 	{
// 		dest[counter] = src[counter];
// 		counter++;
// 	}
// 	dest[counter] = '\0';
// 	return (dest);
// }

// void ft_put42(void *a)
// {
// 	ft_strcpy(a, "42");
// }

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

// 	char a[] = "ici";
// 	char b[] = "non";
// 	char c[] = "non";
// 	char d[] = "ici";
// 	char e[] = "non";

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
// 	fptr = ft_put42;
// 	cmpptr = ft_strcmp;
// 	printf("\n");
// 	ft_list_foreach_if(begin, fptr, "ici", cmpptr);
// 	printf("After foreach: ");
// 	while (begin)
// 	{
// 		printf("%s ", begin->data);
// 		fflush(stdout);
// 		begin = begin->next;
// 	}
// 	printf("\n");

// 	return (0);
// }