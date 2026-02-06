#include <stdio.h>
#include <math.h>
void power_fact(float ,int ,int ,float*,int *);
int main() {
    float a, pow;
    int b, number, factorial;

    printf("Enter a and b for calculating a raised to b: ");
    scanf("%f %d", &a, &b);

    printf("Enter a number whose factorial is to be calculated: ");
    scanf("%d", &number);

    power_fact(a, b, number, &pow, &factorial);

    printf("The value of %.2f raised to %d is %.2f\n", a, b, pow);
    printf("The factorial of %d is %d\n", number, factorial);

    return 0;
}

void power_fact(float x, int y, int num, float *power, int *fact) {
    float res = 1;
    int i;

    // Calculate power
    for(i = 1; i <= y; i++) {
        res = res * x;
    }
    *power = res;

    // Calculate factorial
    int f = 1;
    for(i = 1; i <= num; i++) {
        f = f * i;
    }
    *fact = f;
}