//Вычисляем все корни квадратного уравнения
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main ()

{
    setlocale(LC_ALL, "Rus");

    double a, b, c, determinant, root1, root2, realPart, imaginaryPart;

    printf("Введите коэффициенты a, b и c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    determinant = b*b-4*a*c;

    if (determinant > 0)
    {
       // sqrt() возвращает квадратный корень
        root1 = (-b+sqrt(determinant))/(2*a);
        root2 = (-b-sqrt(determinant))/(2*a);

        printf("root1 = %.2lf и root2 = %.2lf\n", root1,root2);
    }
        // если корни комплексные
        else
        {
            realPart = -b/(2*a);
            imaginaryPart = sqrt(-determinant)/(2*a);
            printf("root1 = %.2lf+%.2lfi и root2 = %.2f-%.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        }
        return 0;

}
