//Проверяем, является ли символ алфавитным или нет

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);

    if((c>='a' && c <= 'z') || (c>='A' && c<='Z'))
        printf("%c - алфавитный\n",c);
    else
        printf("%c - не алфавитный\n",c);
    return 0;
}
