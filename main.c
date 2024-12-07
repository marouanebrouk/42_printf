#include <stdio.h>
#include "ft_printf.h" // Include your ft_printf header file

int main(void)
{
    int num = 42;
    char *str = "Test string";
    void *ptr = &num;

    // 1. Basic string
    ft_printf("Basic string: Hello, World!\n");
    printf("Basic string: Hello, World!\n");

    // 2. Integer tests
    ft_printf("Integer (positive): %d\n", 42);
    printf("Integer (positive): %d\n", 42);
    ft_printf("Integer (negative): %d\n", -42);
    printf("Integer (negative): %d\n", -42);

    // 3. Unsigned integers
    ft_printf("Unsigned integer: %u\n", 1234567890);
    printf("Unsigned integer: %u\n", 1234567890);

    // 4. Hexadecimal (lowercase)
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    printf("Hexadecimal (lowercase): %x\n", 255);

    // 5. Hexadecimal (uppercase)
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    printf("Hexadecimal (uppercase): %X\n", 255);

    // 6. Pointer test
    ft_printf("Pointer address: %p\n", ptr);
    printf("Pointer address: %p\n", ptr);

    // 7. String test
    ft_printf("String test: %s\n", str);
    printf("String test: %s\n", str);

    // 8. Character test
    ft_printf("Character test: %c\n", 'A');
    printf("Character test: %c\n", 'A');

    // 9. Percentage
    ft_printf("Percentage test: %%\n");
    printf("Percentage test: %%\n");

    // 10. Edge cases
    ft_printf("Null string: %s\n", NULL);
    printf("Null string: %s\n", NULL);
    ft_printf("Zero value: %d\n", 0);
    printf("Zero value: %d\n", 0);
    ft_printf("Max unsigned int: %u\n", (unsigned int)-1);
    printf("Max unsigned int: %u\n", (unsigned int)-1);

    // 11. Mixed formats
    ft_printf("Mixed formats: %d, %s, %X, %p, %%\n", num, str, 255, ptr);
    printf("Mixed formats: %d, %s, %X, %p, %%\n", num, str, 255, ptr);

    return 0;
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


