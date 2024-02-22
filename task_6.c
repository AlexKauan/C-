#include <stdio.h>

int mdc(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return mdc(b, a % b);
  }
}

int main()
{
  int escolha, num1, num2, num;

  printf("Digite dois numeros inteiros para calcular o MDC: ");
  scanf("%d %d", &num1, &num2);
  printf("MDC: %d\n", mdc(num1, num2));

  return 0;
}
