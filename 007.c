//Выводим ASCII значение символа

#include <stdio.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    printf("ASCII код %c = %d\n", c, c);
    return 0;
}
