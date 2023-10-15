# Projetos em C

## Sumário

- [Área de um Círculo](#calculadora-de-área-de-círculo)

## Calculadora de Área de Círculo

1. Função de Área de Círculo

Recebe float (raio)
Retorna float (área)

```c
float areaOfCircle (float radius) {
    const float PI = 3.1415;
    float area = PI * radius * radius;

    return area;
}
```

2. Predefinir as variáveis

```c
int main() {

    float radius;
    float area;
    ...
```

3. Receber o valor do raio

```c
    ...
    printf("Digite o valor do raio: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Área do círculo: %.2f\n", area);

    return 0;
}

```

## Calculadora de Circunferência de Círculo

1. Função de Circunferência de Círculo

```c
float circumferenceOfCircle (float radius) {
    const float PI = 3.1415;
    float circumference = 2 * PI * radius;

    return circumference;
}

```

2. Predefinir as variáveis

```c
int main() {

    float radius;
    float circumference;
    ...
```

3. Receber o valor do raio

```c
    ...
    printf("Digite o valor do raio: ");
    scanf("%f", &radius);

    circumference = circumferenceOfCircle(radius);

    printf("Circunferência do círculo: %.2f\n", circumference);

    return 0;
}

```
