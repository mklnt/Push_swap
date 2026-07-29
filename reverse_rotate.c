/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:39:10 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 12:47:16 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate_stack(t_node **stack)
{
	t_node	*last;
	t_node	*new_last;

	if (!stack || !*stack || !(*stack)->next)
		return ;

	new_last = *stack;
	last = *stack;

	while (last->next)
		last = last->next;

	new_last = last->prev;
	new_last->next = NULL;
	last->prev = NULL;

	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}

void	rra(t_node **stack_a)
{
	reverse_rotate_stack(stack_a);
	write(1, "rra\n", 3);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate_stack(stack_b);
	write(1, "rrb\n", 3);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate_stack(stack_a);
	reverse_rotate_stack(stack_b);
	write(1, "rrr\n", 3);
}
