/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrouk <mbrouk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:09:03 by mbrouk            #+#    #+#             */
/*   Updated: 2024/11/27 17:46:08 by mbrouk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str,int count)
{
    int j;

    j = 0;
    if (str == NULL)
    {
        write(1,"(null)",6);
        return (6);
    }
    while (str[j])
    {
        write(1, &str[j++],1);
        count++;
    }
    return (count);
}
