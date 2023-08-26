#include "main.h"
#include <stddef.h> // Include the <stddef.h> header for NULL

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }

    if (c == '\0') {
        return s;
    }

    return NULL;
}

