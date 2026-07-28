#include "libft.h"

static void	rotate_stack(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	// 1. Guard clause: Do nothing if stack has 0 or 1 element
	if (!stack || !*stack || !(*stack)->next)
		return ;

	first = *stack;
	last = *stack;

	// 2. Advance 'last' to the end of the list
	while (last->next)
		last = last->next;

	// 3. Update the stack head to point to the 2nd element
	*stack = first->next;
	(*stack)->prev = NULL;

	// 4. Attach 'first' to the end of the list
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_node **stack_a)
{
	rotate_stack(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate_stack(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate_stack(stack_a);
	rotate_stack(stack_b);
	write(1, "rr\n", 3);
}