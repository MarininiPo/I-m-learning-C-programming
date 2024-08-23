/* . Вычислить среднее арифметическое двух значений х1 и х2 */

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Rus");
int x1, x2, result;

scanf("%d", &x1);
scanf("%d", &x2);

result = (x1+x2)/2;
printf("%d + %d = %s %d\n", x1, x2, "Cреднее арифметическое двух значений", result);

return 0;
}
