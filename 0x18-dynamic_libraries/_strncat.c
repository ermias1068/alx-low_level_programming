// _strncat.c

/**
 * _strncat - Concatenates two strings up to n bytes from source
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to concatenate from src
 * Return: Returns a pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n) {
    char *originalDest = dest;
    
    while (*dest != '\0') {
        dest++;
    }
    
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    *dest = '\0'; // Null-terminate the destination string
    return originalDest;
}

