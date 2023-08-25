// _putchar.c

#include <unistd.h>  // Include the necessary header for the write function

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c) {
    return write(1, &c, 1);  // Writes a single character to the standard output
}

