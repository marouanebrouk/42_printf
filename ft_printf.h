/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:11:12 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/30 17:29:48 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_hexa(unsigned int n, int count);
int	ft_hexa_upper(unsigned int n, int count);
int	ft_pointer_to_hexa(unsigned long address, int count);
int	ft_printf(const char *format, ...);
int	ft_putstr(char *str, int count);
int	ft_putchar(char n, int count);
int	ft_unsigned(unsigned int n, int count);
int	ft_putnbr(int n, int count);
int	ft_printpointer(void *ptr, int count);

#endif
