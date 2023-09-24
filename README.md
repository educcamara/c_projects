# Projetos em C

## Sumário

## Calculadora de Área de Círculo

**1. Função de Área de Círculo**

Recebe float (raio)
Retorna float (área)

```c
float areaOfCircle (float radius) {
    const float PI = 3.1415;
    float area = PI * radius * radius;

    return area;
}
```
**2. Predefinir as variáveis**

```c
int main() {

    float radius;
    float area;
    ...
```

**3. Receber o valor do raio**

```c
    ...
    printf("Digite o valor do raio: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Área do círculo: %.2f\n", area);

    return 0;
}

```
