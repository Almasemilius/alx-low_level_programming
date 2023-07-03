#include <stdio.h>

/**
 * _memset - check the code
 * Description: 'Change pointer value'
 * @s: Pointer to variable str
 * @b: Pointer variable
 * @n: Pointer variable
 * Return: Character
 */

char *_memset(char *s, char b, unsigned int n)
{
        char *ptr = s;

        while (n > 0)
        {
                *ptr = b;
                ptr++;
                n--;
        }
        return (s);
}