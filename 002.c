/* Перевести длину, заданную в дюймах, в сантиметры (10 дюймов = 254 мм) */

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Rus");

    int x;
    float y = 2.54;
    scanf("%d", &x);
    float z = x * y;




    printf("%d %s %8.2f %s", x, "дюймов равно", z, "см");
    return 0;
    }
