/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 13:53:40 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 11:26:56 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest_number(int *str)
{
	int	i;
	int	biggest;

	i = 0;
	while (str[i])
	{
		if ((str[i + 1] > str[i]) && (str[i + 1] > biggest))
			biggest = str[i + 1];
		i++;
	}
	return (biggest);
}

