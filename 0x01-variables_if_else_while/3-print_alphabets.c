#include <stdio.h>

/**                                                                                                                                                           
 *main - Entry point of the program 
 *                                 
 *Description: prints the alphabet
 *                               
 *Return: always 0
 */

int main(void)
{
int i;
for (i = 97; i < 97 + 26; ++i)
{
putchar(i);
}
for (i = 65; i < 65 + 26; ++i)
{
putchar(i);
}
 
putchar('\n');
return (0);
}
