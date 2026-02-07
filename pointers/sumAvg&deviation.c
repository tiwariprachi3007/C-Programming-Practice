#include <stdio.h>
#include <math.h>

// Function prototype
void stats(int *sum, double *avg, double *stddev);

int main() {
    int sum;
    double avg, stddev;

    // Call the function
    stats(&sum, &avg, &stddev);

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", avg);
    printf("Standard Deviation = %.2lf\n", stddev);

    return 0;
}

void stats(int *sum, double *avg, double *stddev) {
    int n1, n2, n3, n4, n5;

    // Input
    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    // Calculate sum
    *sum = n1 + n2 + n3 + n4 + n5;

    // Calculate average (double for precision)
    *avg = *sum / 5.0;

    // Calculate standard deviation (population formula)
    *stddev = sqrt(
        (pow(n1 - *avg, 2) +
         pow(n2 - *avg, 2) +
         pow(n3 - *avg, 2) +
         pow(n4 - *avg, 2) +
         pow(n5 - *avg, 2)) / 5.0
    );
}