/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:19:11 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/27 17:46:36 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n, int count)
{
    if (n == -2147483648)
    {
        count = ft_putstr("-2147483648",count);
    }
    else if (n < 0)
    {
        count = ft_putchar('-',count);
        count = ft_putnbr(-n,count);    
    }
    else if (n >= 0 && n <= 9)
    {
        count = ft_putchar(n + '0',count);
    }
    else
    {
        count = ft_putnbr(n / 10, count);
        count = ft_putchar(n % 10 + '0', count);
    }
    return (count);
}
