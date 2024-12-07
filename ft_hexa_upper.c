/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaCap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:41:22 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/28 11:20:08 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned int n, int count)
{
	if (n >= 16)
	{
		count = ft_hexa_upper(n / 16, count);
		count = ft_hexa_upper(n % 16, count);
	}
	else
	{
		count = ft_putchar("0123456789ABCDEF"[n % 16], count);
	}
	return (count);
}
