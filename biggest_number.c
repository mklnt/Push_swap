/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddroge <david.droege@web.de>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 13:53:40 by ddroge            #+#    #+#             */
/*   Updated: 2026/07/28 13:53:40 by ddroge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int biggest_number(int *str)
{
    int i;
    int biggest;

    i = 0;
    while (str[i])
    {
        if ((str[i + 1] > str[i]) && (str[i + 1] > biggest))
            biggest = str[i + 1];
        i++;
    }
    return (biggest);
}

int main(void)
{
    int str[] = {-4, 1329823, 5, 1320, 1};
    printf("%d", biggest_number(str));
}
