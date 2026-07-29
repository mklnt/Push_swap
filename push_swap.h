/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:21:31 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 11:25:36 by ddroge           ###   ########.fr       */
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

int	has_invalid_number(char *str);
int	string_to_number(char *str, int *number);
int	check_dup(t_node *stack_a, int value);
int	add_to_stack(t_node **stack_a, int value);
