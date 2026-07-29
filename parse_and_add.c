/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_and_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:32:45 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 11:02:04 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "header.h"
#include <stdlib.h>

int	has_invalid_number(char *str);
int	string_to_number(char *str, int *number);
int	check_dup(t_node *stack_a, int value);
int	add_to_stack(t_node **stack_a, int value);

int	main(void)
{
	int	value;
	char *a = "-421";

	if (string_to_number(a, &value) == 1)
		printf("%d\n", value);
	else
		printf("ERROR\n");
	return (0);
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
