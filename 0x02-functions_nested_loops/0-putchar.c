#include "main.h"

/**
 * main - Entry point
 *
 * Description: writing _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar\n";
int i;
for (i = 0; c[i] != '\0'; i++)
{
_putchar(c[i]);
}
return (0);
}

/**
 * _putchar - writes the character c to stdout
 *
 * Description: The character c to write int stdout
 * @c: the character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
