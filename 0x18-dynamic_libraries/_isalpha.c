// _isalpha.c

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to be checked
 * Return: Returns 1 if c is an alphabetic character, otherwise returns 0.
 */
int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

