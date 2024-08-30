// Вычисляем частное и остаток
#include <stdio.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");

    int divident, divisor, quotient, remainder;
        printf("Введите делимое: ");
        scanf("%d", &divident);

        printf("Введите делитель: ");
        scanf("%d", &divisor);

        quotient = divident / divisor;

        remainder = divident % divisor;

        printf("Частное = %d\n", quotient);
        printf("Остаток = %d\n", remainder);

        return 0;
}
