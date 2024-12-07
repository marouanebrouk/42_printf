/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:08:38 by mbrouk            #+#    #+#             */
/*   Updated: 2024/12/01 16:16:23 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(const char *format, va_list args, int j, int count)
{
	if (format[j] == 's')
		count = ft_putstr(va_arg(args, char *), count);
	else if (format[j] == 'd' || format[j] == 'i')
		count = ft_putnbr(va_arg(args, int), count);
	else if (format[j] == 'u')
		count = ft_unsigned(va_arg(args, unsigned int), count);
	else if (format[j] == 'c')
		count = ft_putchar(va_arg(args, int), count);
	else if (format[j] == 'x')
		count = ft_hexa(va_arg(args, unsigned int), count);
	else if (format[j] == 'X')
		count = ft_hexa_upper(va_arg(args, unsigned int), count);
	else if (format[j] == 'p')
		count = ft_printpointer(va_arg(args, void *), count);
	else if (format[j] == '%')
		count = ft_putchar(format[j], count);
	else if (format[j] == '\0')
		count = -1;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		j;

	count = 0;
	j = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
			count = ft_check_format(format, args, ++j, count);
		else
		{
			write(1, &format[j], 1);
			count++;
		}
		if (format[j])
			j++;
	}
	return (va_end(args), count);
}
