//Вычисляем сумму натуральных чисел с помощью цикла while

#include <stdio.h>
#include <locale.h>

 main(void)
{
    setlocale(LC_ALL, "Rus");

    int n, i, sum = 0;

    printf("Введите положительное число: ");
    scanf("%d",&n);

    i = 1;
    while ( i <= n)
    {
        sum += i;
        ++i;
    }
    printf("Сумма = %d", sum);

    return 0;
}
