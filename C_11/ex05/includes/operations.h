/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemieux <jlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:57:07 by jlemieux          #+#    #+#             */
/*   Updated: 2023/01/31 20:09:35 by jlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_multi(int a, int b);
int		ft_sub(int a, int b);
int		ft_atoi(char *str);

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif