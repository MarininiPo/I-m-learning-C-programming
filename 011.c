//Как работает long

#include <stdio.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");

    int a;
    long b;
    long long c;

    double e;
    long double f;

    printf("Размер int = %ld байт\n", sizeof(a));
    printf("Размер long = %ld байт\n", sizeof(f));
    printf("Размер long long = %ld байт\n", sizeof(c));

    printf("Размер double = %ld байт\n", sizeof(e));
    printf("Размер long double = %ld байт\n", sizeof(f));


    //long не может быть использовано с типами данных float и char.
    return 0;
}
