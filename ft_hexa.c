/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:41:14 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/28 11:17:12 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int n, int count)
{
	if (n >= 16)
	{
		count = ft_hexa(n / 16, count);
		count = ft_hexa(n % 16, count);
	}
	else
	{
		count = ft_putchar("0123456789abcdef"[n % 16], count);
	}
	return (count);
}
