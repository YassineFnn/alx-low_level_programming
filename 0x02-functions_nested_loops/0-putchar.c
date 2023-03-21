#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar\n";
int i;
for (i = 0; c[i] != '\0'; i++)
{
putch(c[i]);
}
return (0);
}

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putch(char c)
{
return (write(1, &c, 1));
}
