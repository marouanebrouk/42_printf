/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:22:20 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/27 17:45:52 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsigned(unsigned int n,int count)
{

    if (n <= 9)
    {
        count = ft_putchar(n + '0',count);
    }
    else
    {
        count = ft_unsigned(n / 10, count);
        count = ft_putchar(n % 10 + '0', count);
    }
    return (count);
}
