#include "main.h"
#include <stddef.h> // Include the <stddef.h> header for NULL

char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack;
        }
        haystack++;
    }

    return NULL;
}

