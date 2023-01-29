/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:04:41 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/29 14:55:05 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next;
	t_list	*current;

	while (begin_list != NULL)
	{
		(*free_fct)(begin_list->data);
		next = begin_list->next;
		current = begin_list;
		free(current);
		begin_list = next;
	}
}
