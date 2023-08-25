// _atoi.c

/**
 * _atoi - Converts a string to an integer
 * @s: Input string
 * Return: Returns the integer value of the string.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    
    if (*s == '-') {
        sign = -1;
        s++;
    }
    
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }
    
    return result * sign;
}

