#include "libft.h"

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

void	sa(t_node **stack_a)
{
	swap_values(*stack_a);
	swap_values(*stack_b);
	write(1, "ss\n, 3");
}
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
