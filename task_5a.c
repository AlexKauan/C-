#include <stdio.h>
#include <math.h>

void testarRaizesReais(int a, int b, int c)
{
  int discriminante = b * b - 4 * a * c;

  if (discriminante >= 0)
  {
    printf("A função tem raízes reais.\n");
  }
  else
  {
    printf("A função não tem raízes reais.\n");
  }
}

int main()
{
  int a, b, c;

  printf("Digite os coeficientes da função do segundo grau (a b c): ");
  scanf("%d %d %d", &a, &b, &c);

  testarRaizesReais(a, b, c);

  return 0;
}
