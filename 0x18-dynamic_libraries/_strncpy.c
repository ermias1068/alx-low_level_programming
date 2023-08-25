// _strncpy.c

/**
 * _strncpy - Copies up to n bytes of a string to another buffer
 * @dest: Destination buffer
 * @src: Source string
 * @n: Number of bytes to copy
 * Return: Returns a pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n) {
    char *originalDest = dest;
    
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    // Fill remaining characters with null bytes if n is not exhausted
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }
    
    return originalDest;
}

