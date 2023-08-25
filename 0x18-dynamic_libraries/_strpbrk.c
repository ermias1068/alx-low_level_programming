// _strpbrk.c

#include <stddef.h> // Include the header for NULL definition
#include "main.h"   // Include the header file containing _strchr prototype

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The characters to search for
 * Return: Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (_strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}

