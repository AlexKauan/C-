#include <stdio.h>

int main()
{
  int i;

  for (i = 0; i <= 127; i++)
  {
    printf("%3d: %c   ", i, (char)i);

    if ((i + 1) % 10 == 0)
    {
      printf("\n");
    }
  }

  return 0;
}