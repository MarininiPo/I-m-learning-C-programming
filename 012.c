//Меняем местами два числа

#include <stdio.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");
        double A, B, temp;

        printf("Введите A: ");
        scanf("%lf", &A);

        printf("Введите B: ");
        scanf("%lf", &B);

        temp = A; // Значение А будет присвоено переменной temp
        A = B; // Значение В будет назначено переменной А

        B = temp; // Значение temp будет присвоено В

        printf("\nПосле замены, A = %.2lf\n", A);
        printf("\nПосле замены, B = %.2lf\n", B);

        return 0;

}
