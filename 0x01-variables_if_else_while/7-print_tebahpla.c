#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: prints alphabets in reverse order
 *
 *Return : always 0
 */

int main(void)
{
int i;
for (i = 96 + 25; i >= 96; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
