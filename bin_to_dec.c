/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <david.droege@web.de>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 20:15:05 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/27 20:15:05 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*dec_to_bin(int value)
{
	int	i;
	int	j;
	int	bin_result[32];
	int	bin_final[32];
	int	i_max;

	i = 0;
	while (value > 0)
	{
		bin_result[i] = value % 2;
		value /= 2;
		i++;
	}
	i_max = i;
	j = 0;
	i--;
	while (j < i_max)
	{
		bin_final[j] = bin_result[i];
		j++;
		i--;
	}
	return (bin_final);
}
