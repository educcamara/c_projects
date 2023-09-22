#include <stdio.h>

float areaOfCircle (float radius) {
    const float PI = 3.1415;
    float area = PI * radius * radius;

    return area;
}

int main() {

    float radius;
    float area;

    printf("Calculadora de Área de Círculo\n\n");

    printf("Digite o valor do raio: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Área do círculo: %.2f\n", area);

    return 0;
}
