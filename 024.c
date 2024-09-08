//Вычисление факториала
//Факториал положительного целого числа n - это результат умножения чисел от 1 до n
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, i;
    unsigned long long factorial = 1;

    printf("Введите n: ");
    scanf("%d", &n);

    // проверяем, чтобы введенное число было положительным


    if (n<0)
        printf("Факториал отрицательного числа не существует.\n");
    else
    {
        for(i =1; i<=n; ++i)
        {
            factorial*= i;
        }
        printf("Факториал %d = %llu\n", n, factorial);
    }

    return 0;
}
