/* Сложжить 2 числа. Последовательно ввести 2 числа, которые нужно сложить. вывод одно число результат. */

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Rus");

     int x, y, res;

    printf("Введите первое число: ");
    scanf("%d", &x);
    printf("Введите второе число: ");

scanf("%d", &y);
    res = x + y;

    printf("Сумма чисел равна: ""%d", res);
    return 0;
    }
