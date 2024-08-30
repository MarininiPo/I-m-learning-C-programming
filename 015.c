//Проверяем, является ли число четным или нет

#include <stdio.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");

    int number;
    printf("Введите целое число: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d - четное \n", number);
    else
        printf("%d - нечетное \n", number);

    return 0;

}
