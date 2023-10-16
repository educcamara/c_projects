#include <stdio.h>
#include <math.h>

// float areaOfCircle (float radius) {
//     const float PI = 3.1415;
//     float area = PI * radius * radius;

//     return area;
// }

// float circumferenceOfCircle (float radius) {
//     const float PI = 3.1415;
//     float circumference = 2 * PI * radius;

//     return circumference;
// }

int main() {

    float a;
    float b;
    float c;

    printf("Calculadora de Hipotenusa\n");

    printf("Digite o lado A: ");
    scanf("%f", &a);

    printf("Digite o lado B: ");
    scanf("%f", &b);

    c = sqrt(a * a + b * b);

    printf("Lado C: %.2f\n", c);

    return 0;
}
