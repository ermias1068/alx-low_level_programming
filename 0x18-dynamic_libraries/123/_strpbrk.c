#include "main.h"
#include <stddef.h> // Include the <stddef.h> header for NULL

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (_strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }

    return NULL;
}

