/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <david.droege@web.de>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:21:01 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/28 12:21:01 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft_strlen(char *str);

int dec_to_bin(char *bin_value)
{
    int i;
    int dec_result;

    i = 0;
    dec_result = 0;
    while (bin_value[i])
    {
        dec_result = (dec_result * 2) + (bin_value[i] - '0');
        i++;
    }
    return (dec_result);
}

int main(void)
{
    char *value = "11001";
    printf("%d", dec_to_bin(value));
}

