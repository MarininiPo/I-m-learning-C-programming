//Проверяем, является ли число отрицательным или положительным

#include <stdio.h>
#include <math.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");

    int number;
    scanf("%d", &number);
        if (number <= 0)
        {
            if (number == 0)
                printf("Bы ввели 0\n");
            else
                printf("Отрицательное \n");
        }
        else
            printf("Положительное \n");
            return 0;
}
