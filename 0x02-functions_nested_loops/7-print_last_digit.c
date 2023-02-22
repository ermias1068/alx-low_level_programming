#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n == INT_MIN)
        n = -(n + 1);

    if (n < 0)
        n = -n;

    last_digit = n % 10;

    _putchar(last_digit + '0');

    return last_digit;
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(INT_MIN);
    _putchar('0' + r);
    _putchar('\n');

    return (0);
}

