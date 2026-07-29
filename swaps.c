/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlentini <mlentini@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 20:26:47 by mlentini          #+#    #+#             */
/*   Updated: 2026/07/21 20:31:00 by mlentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_values(t_node *stack)
{
    int tmp_val;
    int tmp_idx;

    if (!stack || !stack->next)
        return(NULL);
    tmp_val = stack->value;
    tmp_idx = stack->index;
    stack->value = stack->next->value;
    stack->index = stack->next->index;
    stack->next->value = tmp_val;
    stack->next->index = tmp_idx;
}

void	sa(t_node **stack_a)
{
	swap_values(*stack_a);
	write(1, "sa\n, 3");
}

void	sa(t_node **stack_b)
{
	swap_values(*stack_b);
	write(1, "sb\n, 3");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap_values(*stack_a);
	swap_values(*stack_b);
	write(1, "ss\n, 3");
}
