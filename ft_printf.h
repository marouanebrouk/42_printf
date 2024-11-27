/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:11:12 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/27 19:20:06 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putstr(char *str,int count);
int ft_putchar(char n, int count);
int ft_unsigned(unsigned int n,int count);
int ft_putnbr(int n, int count);
int ft_hexa(unsigned int n,int count);
int ft_hexaCap(unsigned int n,int count);
int ft_printPointer(void *p,int count);

#endif
