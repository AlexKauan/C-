#include <stdio.h>

// Função de Ackermann
int ackermann(int m, int n)
{
  if (m == 0)
  {
    return n + 1;
  }
  else if (m > 0 && n == 0)
  {
    return ackermann(m - 1, 1);
  }
  else if (m > 0 && n > 0)
  {
    return ackermann(m - 1, ackermann(m, n - 1));
  }
  else
  {

    return -1;
  }
}

void print_results(int a, int b)
{
  for (int x = 0; x < a; x++)
  {
    for (int y = 0; y < b; y++)
    {
      printf("A(%d, %d) = %d\n", x, y, ackermann(x, y));
    }
  }
}

int main()
{
  int m, n;

  printf("Digite o valor de m: ");
  scanf("%d", &m);

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  print_results(n, m);

  return 0;
}
