#include <stdio.h>

float areaOfCircle (float radius) {
    const float PI = 3.1415;
    float area = PI * radius * radius;

    return area;
}

float circumferenceOfCircle (float radius) {
    const float PI = 3.1415;
    float circumference = 2 * PI * radius;

    return circumference;
}

int main() {

    float radius;
    float area;
    float circumf;

    printf("Calculadora de Área de Círculo\n\n");

    printf("Digite o valor do raio: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);
    circumf = circumferenceOfCircle(radius);

    printf("Área do círculo: %.2f\n", area);
    printf("Área da circunferência: %.2f\n", circumf);

    return 0;
}
