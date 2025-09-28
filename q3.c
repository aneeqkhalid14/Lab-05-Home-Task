#include <stdio.h>

int main() {
    float a, b, c, discriminant;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("The discriminant is %.2f and it has Two real roots\n", discriminant);
    }
    else if (discriminant == 0) {
        printf("The discriminant is %.2f and it has One real root\n", discriminant);
    }
    else {
        printf("The discriminant is %.2f and it has Imaginary roots\n", discriminant);
    }
}
   
