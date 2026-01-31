


#include <stdio.h>

void areaperi(int r, float *a, float *p);

int main() {
    int radius;
    float area, perimeter;

    printf("Enter radius: ");
    scanf("%d", &radius);   

    areaperi(radius, &area, &perimeter);

    printf("area = %f perimeter = %f\n", area, perimeter);
    return 0;
}

void areaperi(int r, float *a, float *p) {
    *a = 3.14 * r * r;      
    *p = 2 * 3.14 * r;       
}