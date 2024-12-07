/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:07:20 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/28 11:39:36 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *ptr, int count)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	else
	{
		count = ft_putchar('0', count);
		count = ft_putchar('x', count);
		count = ft_pointer_to_hexa(address, count);
	}
	return (count);
}
