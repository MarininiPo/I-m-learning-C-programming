//Вычисляем сумму натуральных чисел с помощью цикла for

#include <stdio.h>
#include <locale.h>

 main(void)
{
    setlocale(LC_ALL, "Rus");

    int n, i, sum;

    printf("Введите положительное число: ");
    scanf("%d",&n);

    for(i=1; i<= n; ++i)
    {
        sum = sum + i;
    }
    printf("Сумма = %d\n", sum);

    return 0;
}
