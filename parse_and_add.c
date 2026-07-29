/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:32:45 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 12:12:44 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	has_invalid_number(char *str);
// int	string_to_number(char *str, int *number);
// int	check_dup(t_node *stack_a, int value);
// int	add_to_stack(t_node **stack_a, int value);
int		parse_and_add(t_node **stack_a, char *str);
void	print_stack(t_node *stack);

int	main(void)
{
	int	value;
	char *a = "-421";
	t_node	*stack_a;

	stack_a = NULL;
	parse_and_add(&stack_a, "5");
	parse_and_add(&stack_a, "-8");
	parse_and_add(&stack_a, "12");
	print_stack(stack_a);

	if (string_to_number(a, &value) == 1)
		printf("%d\n", value);
	else
		printf("ERROR\n");

	return (0);
}

void	print_stack(t_node *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

int	parse_and_add(t_node **stack_a, char *str)
{
	int	value;

	if (has_invalid_number(str) == 1)
		return (0);
	if (string_to_number(str, &value) == 0)
		return (0);
	if (check_dup(*stack_a, value) == 1)
		return (0);
	if (add_to_stack(stack_a, value) == 0)
		return (0);
	return (1);
}


