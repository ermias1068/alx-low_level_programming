// _memset.c

/**
 * _memset - Fills the first n bytes of memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte to be filled
 * @n: The number of bytes to be filled
 * Return: Returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n) {
    char *original = s;
    
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }
    
    return original;
}

