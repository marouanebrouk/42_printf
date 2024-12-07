/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:39:01 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/28 11:29:29 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_to_hexa(unsigned long address, int count)
{
	if (address >= 16)
	{
		count = ft_pointer_to_hexa(address / 16, count);
		count = ft_pointer_to_hexa(address % 16, count);
	}
	else
	{
		count = ft_putchar("0123456789abcdef"[address % 16], count);
	}
	return (count);
}
