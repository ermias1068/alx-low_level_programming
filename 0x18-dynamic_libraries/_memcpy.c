// _memcpy.c

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: The number of bytes to be copied
 * Return: Returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *originalDest = dest;
    
    while (n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    return originalDest;
}

