#include <stdio.h>

struct complex {
    int real;
    int imag;
};

int main() {
    struct complex num1, num2, sum,diff;


    scanf("%d %d", &num1.real, &num1.imag);
    scanf("%d %d", &num2.real, &num2.imag);

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    diff.real = num1.real - num2.real;
    diff.imag = num1.imag - num2.imag;

    printf("%d+%di \n", sum.real, sum.imag);
    printf("%d+%di", diff.real, diff.imag);

    return 0;
}