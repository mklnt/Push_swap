/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlentini <mlentini@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:25:41 by mlentini          #+#    #+#             */
/*   Updated: 2026/07/21 20:30:31 by mlentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	push_node(t_node **src, t_node **dest)
{
    t_node *node_to_move;

    if (!src || !*src)
        return;
    node_to_move = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    node_to_move->prev = NULL;
    node_to_move->next = *dest;
    if (*dest)
        (*dest)->prev = node_to_move;
    *dest = node_to_move;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
    push_node(stack_b, stack_a);
    write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
    push_node(stack_a, stack_b);
    write(1, "pb\n", 3);
}
