/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:19:41 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 11:22:02 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_invalid_number(char *str)
{
	if (!str)
		return (1);
	if (str[0] == '\0')
		return (1);
	if (str[0] == '+' || str[0] == '-')
		str++;
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}

	return (0);
}

int	string_to_number(char *str, int *number)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	result = result * sign;
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	*number = (int)result;
	return (1);
}

int	check_dup(t_node *stack_a, int number_value)
{
	while (stack_a)
	{
		if (stack_a->value == number_value)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

int	add_to_stack(t_node **stack_a, int number_value)
{
	t_node	*new_node;
	t_node	*last;

	last = *stack_a;
	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->value = number_value;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*stack_a == NULL)
	{
		*stack_a = new_node;
		return (1);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return (1);
}
