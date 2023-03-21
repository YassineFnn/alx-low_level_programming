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
putch(c[i]);
}
return (0);
}

/**
 * putch - writes the character c to stdout
 *
 * Description: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putch(char c)
{
return (write(1, &c, 1));
}
