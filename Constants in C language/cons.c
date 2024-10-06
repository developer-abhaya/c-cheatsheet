#include <stdio.h>

int main() {
    const float Pi = 3.14;
    const int Radius = 23;
    float area;
    area = Pi * Radius * Radius;

    printf("The value of cicle with radius is : %d is : %f sq.unit.\n", Radius, area);

    return 0;  // End of the program execution
}