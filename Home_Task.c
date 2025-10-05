#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, result;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

    result = sqrt(pow(2 + y, 2) + pow(sin(y + 5), 1.0 / 7.0)) / (log(x + 1) - pow(y, 3));
    printf("F(%.2f, %.2f) = %.5f\n\n", x, y, result);

    double x_test = 0.71 * pow(10, -4);
    double y_test = 4.0;
    double control_result = sqrt(pow(2 + y_test, 2) + pow(sin(y_test + 5), 1.0 / 7.0)) / (log(x_test + 1) - pow(y_test, 3));
    printf("Контроль №1: \n");
    printf("F(%.7f, %.1f) = %.5f\n", x_test, y_test, control_result);
    printf("Ожидаемый результат: -0.09489\n\n");

    double x_test2 = 2.3 * pow(10, 5);
    double y_test2 = 2.7;
    double control_result2 = sqrt(pow(2 + y_test2, 2) + pow(sin(y_test2 + 5), 1.0 / 7.0)) / (log(x_test2 + 1) - pow(y_test2, 3));
    printf("Контроль №2: \n");
    printf("F(%.7f, %.1f) = %.6f\n", x_test2, y_test2, control_result2);
    printf("Ожидаемый результат: -0.654889\n");
    return 0;
}