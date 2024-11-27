#include "ft_printf.h"
#include <stdio.h>



#include <stdio.h>
int main()
{
    void *p;
    int n = printf("%p",p);
    printf("\n");
    int m = ft_printf("%p",p);
    // printf("\n");
    // int m = printf("%s","%haha");
    // printf("\n%d",n);
    // printf("\n%d\n",m);
}
//  ft_printf("%%%");
// printf("%%%");

// int m =ft_printf(NULL);    
// printf("%d",m);
// }


// int ft_putchar(char n, int count)
// {
//     write(1, &n, 1);
//     count++;
//     return (count);
// }


// int ft_putstr(char *str,int count)
// {
//     int j;

//     j = 0;
//     if (str == NULL)
//     {
//         write(1,"(null)",6);
//         return (6);
//     }
//     while (str[j])
//     {
//         write(1, &str[j++],1);
//         count++;
//     }
//     return (count);
// }





/*
static int ft_check_format(const char *format, va_list args, int j, int count)
{
    if (format[j] == 's')
        count = ft_putstr(va_arg(args ,char *),count);
    else if (format[j] == 'd' || format[j] == 'i')
        count = ft_putnbr(va_arg(args ,int),count);
    else if (format[j] == 'u')
        count = ft_unsigned(va_arg(args,unsigned int),count);
    else if (format[j] == 'c')
        count = ft_putchar(va_arg(args,int),count);
    else if (format[j] == 'x')
        count = ft_hexa(va_arg(args,unsigned int),count);
    else if (format[j] == 'X')
        count = ft_hexaCap(va_arg(args,unsigned int),count);
    else if (format[j] == '%')
        count = ft_putchar(format[j],count);
    return (count);
}

int ft_printf(const char *format, ...)
{
    int count = 0;
    int j = 0;
    va_list args;
    if (!format)
        return (-1);
    va_start(args, format);
    while (format[j])
    {
        if (format[j] == '%')
        {
          count = ft_check_format(format, args, ++j, count);
        }
        else
        {
            write(1,&format[j],1);
            count++;
        }
        j++;
    }
    va_end(args);
    return (count);
}
*/




// int ft_unsigned(unsigned int n,int count)
// {

//     if (n >= 0 && n <= 9)
//     {
//         count = ft_putchar(n + '0',count);
//     }
//     else
//     {
//         count = ft_unsigned(n / 10, count);
//         count = ft_putchar(n % 10 + '0', count);
//     }
//     return (count);
// }




// int ft_putnbr(int n, int count)
// {
//     if (n == -2147483648)
//     {
//         count = ft_putstr("-2147483648",count);
//     }
//     else if (n < 0)
//     {
//         count = ft_putchar('-',count);
//         count = ft_putnbr(-n,count);    
//     }
//     else if (n >= 0 && n <= 9)
//     {
//         count = ft_putchar(n + '0',count);
//     }
//     else
//     {
//         count = ft_putnbr(n / 10, count);
//         count = ft_putchar(n % 10 + '0', count);
//     }
//     return (count);
// }





// int ft_hexa(unsigned int n,int count)
// {
//     if(n >= 16)
//     {
//         count = hexta(n/16,count);
//         count = hexta(n%16,count);
//     }
//     else
//     {
//         count = ft_putchar("0123456789abcdef"[n%16],count);
//     }
//     return (count);    
// }






// int ft_hexaCap(unsigned int n,int count)
// {
//     if(n >= 16)
//     {
//         count = hextaCap(n/16,count);
//         count = hextaCap(n%16,count);
//     }
//     else
//     {
//         count = ft_putchar("0123456789ABCDEF"[n%16],count); //2
//     }
//     return (count);
// }





// int main() {
//     int test_int = 42;
//     char *test_str = "Hello, World!";
//     double test_float = 3.14159;
//     char test_char = 'A';

//     // Test %s - String
//     ft_printf("Test %s: %s\n", "String", test_str);
//     printf("Expected: Test String: %s\n", test_str);

//     // Test %d - Decimal Integer
//     ft_printf("Test %d: %d\n", "Integer", test_int);
//     printf("Expected: Test Integer: %d\n", test_int);

//     // Test %x - Hexadecimal (lowercase)
//     ft_printf("Test %x: %x\n", "Hexadecimal", test_int);
//     printf("Expected: Test Hexadecimal: %x\n", test_int);

//     // Test %X - Hexadecimal (uppercase)
//     ft_printf("Test %X: %X\n", "Hexadecimal Uppercase", test_int);
//     printf("Expected: Test Hexadecimal Uppercase: %X\n", test_int);

//     // Test %c - Character
//     ft_printf("Test %c: %c\n", "Character", test_char);
//     printf("Expected: Test Character: %c\n", test_char);

//     // Test %f - Floating Point
//     ft_printf("Test %f: %.5f\n", "Floating point", test_float);
//     printf("Expected: Test Floating point: %.5f\n", test_float);

//     // Test %p - Pointer (to demonstrate pointer format)
//     ft_printf("Test %p: %p\n", "Pointer", &test_int);
//     printf("Expected: Test Pointer: %p\n", &test_int);

//     // Test %% - Literal percent symbol
//     ft_printf("Test %%: %%\n");
//     printf("Expected: Test %%: %%\n");

//     return 0;
// }


