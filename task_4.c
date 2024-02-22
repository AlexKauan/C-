#include <stdio.h>

void decimalToRoman(int num)
{
  if (num <= 0 || num > 100)
  {
    printf("Forneça um número no intervalo de 1 a 100.\n");
    return;
  }

  printf("%3d: ", num);

  while (num >= 100)
  {
    printf("C");
    num -= 100;
  }
  while (num >= 90)
  {
    printf("XC");
    num -= 90;
  }
  while (num >= 50)
  {
    printf("L");
    num -= 50;
  }
  while (num >= 40)
  {
    printf("XL");
    num -= 40;
  }
  while (num >= 10)
  {
    printf("X");
    num -= 10;
  }
  while (num >= 9)
  {
    printf("IX");
    num -= 9;
  }
  while (num >= 5)
  {
    printf("V");
    num -= 5;
  }
  while (num >= 4)
  {
    printf("IV");
    num -= 4;
  }
  while (num >= 1)
  {
    printf("I");
    num -= 1;
  }

  printf("\n");
}

int main()
{
  printf("Tabela de equivalentes de algarismos romanos para números decimais de 1 a 100:\n");

  for (int i = 1; i <= 100; i++)
  {
    decimalToRoman(i);
  }

  return 0;
}
