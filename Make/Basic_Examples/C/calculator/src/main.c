// main.c

#include <stdio.h>
#include "calculator.h"

int main() {
    int a = 10, b = 5;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %lf\n", divide(a, b));

    return 0;
}

