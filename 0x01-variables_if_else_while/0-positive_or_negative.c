#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int n = rand() % RAND_MAX - RAND_MAX / 2;

if(n < 0)
  printf("%d is negative\n", n);
else if(n > 0)
  printf("%d is positive\n", n);
else
  printf("%d is zero\n", n);

return 0;
}
