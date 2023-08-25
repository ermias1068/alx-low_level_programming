// _strcpy.c

/**
 * _strcpy - Copies a string to another buffer
 * @dest: Destination buffer
 * @src: Source string
 * Return: Returns a pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src) {
    char *originalDest = dest;
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0'; // Null-terminate the destination string
    return originalDest;
}

