// _puts.c

#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line
 * @s: The input string
 */
void _puts(char *s) {
    while (*s != '\0') {
        write(1, s, 1);
        s++;
    }
    write(1, "\n", 1);
}

