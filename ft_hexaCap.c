/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaCap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:41:22 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/27 18:11:22 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexaCap(unsigned int n,int count)
{
    if(n >= 16)
    {
        count = ft_hexaCap(n/16,count);
        count = ft_hexaCap(n%16,count);
    }
    else
    {
        count = ft_putchar("0123456789ABCDEF"[n%16],count);
    }
    return (count);
}
