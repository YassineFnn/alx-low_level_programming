#include <stdio.h>

/**
 *main - Entry point of the programm
 *
 *Description: prints the numbers of base 16
 *
 *Return: always 0
 */

int main(void)
{
int i;
for (i = 0; i < 16; ++i)
{
if (i > 9)
{
putchar(i + 87);
}
else
putchar(i + '0');
}
return (0);
}
