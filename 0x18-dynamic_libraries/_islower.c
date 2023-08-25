// _islower.c

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 * Return: Returns 1 if c is lowercase, otherwise returns 0.
 */
int _islower(int c) {
    return (c >= 'a' && c <= 'z');  // Checks if c is within the range of lowercase letters
}

