// _strcat.c

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Returns a pointer to the destination string.
 */
char *_strcat(char *dest, char *src) {
    char *originalDest = dest;
    
    while (*dest != '\0') {
        dest++;
    }
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0'; // Null-terminate the destination string
    return originalDest;
}

