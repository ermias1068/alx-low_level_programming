// _strchr.c

#include <stddef.h> // Include the header for NULL definition

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: Returns a pointer to the first occurrence of c in s, or NULL if c is not found.
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    
    if (c == '\0') {
        return s; // Return pointer to the null-terminator
    }
    
    return NULL; // Character not found
}

