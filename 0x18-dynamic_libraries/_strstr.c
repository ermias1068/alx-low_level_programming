// _strstr.c

#include <stddef.h> // Include the header for NULL definition
#include "main.h"   // Include the header file containing _strchr prototype

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to be searched
 * @needle: The substring to search for
 * Return: Returns a pointer to the first occurrence of the substring needle in the string haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        
        if (*n == '\0') {
            return haystack; // Found the substring
        }
        
        haystack++;
    }
    
    return NULL; // Substring not found
}

