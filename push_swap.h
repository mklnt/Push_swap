/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:21:31 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 13:27:06 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

int		has_invalid_number(char *str);
int		string_to_number(char *str, int *number);
int		check_dup(t_node *stack_a, int value);
int		add_to_stack(t_node **stack_a, int value);
int		parse_and_add(t_node **stack_a, char *str);
void	print_stack(t_node *stack);
void	print_error_and_free(t_node *stack_a, t_node *stack_b);
void	free_stack(t_node *stack);
int		is_sorted(t_node *stack);
int		stack_size(t_node *stack);
