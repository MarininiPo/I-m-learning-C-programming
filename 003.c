/* Перевести длину, заданную в сантиметрах, в дюймы. */

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Rus");

     int x; //длина в сантиметрах

    scanf("%d", &x);
    double y = 0.39;
    double z = x * y;




    printf("%d %s %lg %s", x, "сантиметра равно", z, "дюймов");
    return 0;
    }
