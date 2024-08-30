//Умножение двух вещественных чисел.

#include <stdio.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");

    double firstNumber, secondNumber, product;
      printf("Введите два числа: ");
      scanf("%lf %lf", &firstNumber, &secondNumber);
    product = firstNumber * secondNumber;
      printf("Результат умножения двух чисел = %.2lf\n", product);
    return 0;
}
