/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:29:57 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 13:32:30 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;
	int		size;

	i = 1;
	while (i < (argc - 1))
	{
		parse_and_add(&stack_a, argv[i]);
		i++;
	}
	if (!parse_and_add(&stack_a, argv[i]))
		print_error_and_free(stack_a, stack_b);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		return (0);
	}
	size = stack_size(stack_a);
	if (size == 2)
		sort_two
	else if (size == 3)
		sort_three
	else
		radix_sort;
	free_stack(stack_a);
	free_stack(stack_b);
}
