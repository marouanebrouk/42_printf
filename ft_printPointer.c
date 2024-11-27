#include "ft_printf.h"

int ft_printPointer(void *ptr, int count)
{
    unsigned long address = (unsigned long)ptr;  // Cast the pointer to an unsigned long
    count = ft_putchar('0', count);  // Print the '0' of the '0x' prefix
    count = ft_putchar('x', count);  // Print the 'x' of the '0x' prefix
    if (address == 0)
    {
        count = ft_putchar('0', count);  // If the pointer is NULL, print "0x0"
    }
    else
    {
        count = ft_hexa(address, count);  // Print the hexadecimal value of the pointer
    }
    return count;
}