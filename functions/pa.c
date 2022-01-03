/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:25 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 14:35:34 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *stack)
{
	t_node	*list;
	int		*buff;

	buff = malloc(sizeof(int));
	*buff = *((int *) stack->b->first->content);
	list_add_front(stack->a, buff);
	list = stack->b->first->next;
	delete_list(stack->a, stack->b->first, free);
	stack->b->first = list;
	ft_putstr_fd("pa\n", 1);
}