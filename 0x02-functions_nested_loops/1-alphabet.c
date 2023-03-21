#include "main.h"
11;rgb:0000/0000/0000/**
 * main - Entry level of the program
 *
 * Description: prints the alphabet
 *
 * Return: always 0
 */

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

int putch(char c)
{
return (write(1, &c, 1));
}

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putch(c);
}
putch('\n');
}
