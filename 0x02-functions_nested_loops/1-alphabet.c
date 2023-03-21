#include "main.h"

/**
 * main - Entry level of the program
 *
 * Description: prints the alphabet
 *
 * Return: always 0
 */

int main(void)
{
print_alphabet();
return (0);
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
