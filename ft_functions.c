/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <ddroge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:20:45 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/29 11:28:15 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_int_strlen(int str[])
{
	int	i;
	// printf("This is str: %i", str[i]);
	i = 0;
	while (!str[i])
	{
		printf("This is str: %i", str[i]);
		i++;
	}
	return (i);
}
