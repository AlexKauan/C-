#include <stdio.h>
#include <math.h>

void calcularRaizesReais(int a, int b, int c)
{
  int discriminante = b * b - 4 * a * c;

  if (discriminante < 0)
  {
    printf("A função não tem raízes reais.\n");
  }
  else
  {
    double raiz1 = (-b + sqrt(discriminante)) / (2.0 * a);
    double raiz2 = (-b - sqrt(discriminante)) / (2.0 * a);

    printf("Raiz 1: %lf\n", raiz1);
    printf("Raiz 2: %lf\n", raiz2);
  }
}

int main()
{
  int a, b, c;

  printf("Digite os coeficientes da função do segundo grau (a b c): ");
  scanf("%d %d %d", &a, &b, &c);

  calcularRaizesReais(a, b, c);

  return 0;
}
