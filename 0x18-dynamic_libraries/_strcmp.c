// _strcmp.c

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns an integer less than, equal to, or greater than zero if s1 is found to be less than, equal to, or greater than s2, respectively.
 */
int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    
    return *s1 - *s2;
}

