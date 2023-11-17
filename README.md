# Projetos em C

Um repositório para aprender C por meio de projetos simples.

## Sumário

- [Sumário](#sumário)
- [Calculadora de Área de Círculo](#calculadora-de-área-de-círculo)
- [Calculadora de Circunferência de Círculo](#calculadora-de-circunferência-de-círculo)
- [Criador de Matriz](#criador-de-matriz)

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

1. Função de Circunferência de Círculo:

```c
float circumferenceOfCircle (float radius) {
    const float PI = 3.1415;
    float circumference = 2 * PI * radius;

    return circumference;
}

```

2. Predefinir as variáveis:

```c
int main() {

    float radius;
    float circumference;
    ...
```

3. Receber o valor do raio:

```c
    ...
    printf("Digite o valor do raio: ");
    scanf("%f", &radius);

    circumference = circumferenceOfCircle(radius);

    printf("Circunferência do círculo: %.2f\n", circumference);

    return 0;
}

```

## Criador de Matriz

Um simples programa que recebe 2 argumentos (quantidade de linhas e quantidade de colunas) que
inicializa uma matriz com dadas dimensões.

### Funções de Output:

`print_array`:
  - m: inteiro sendo o tamanho do vetor `int m;`
  - array: vetor de inteiros com tamanho m `int array[m]`
`print_matrix`:
  - m: inteiro sendo a quantidade de linhas `int m;`
  - n: inteiro sendo a quantidade de colunas `int n;`
  - array: vetor bi-dimensional com tamanho m x n `int array[m][n]`

### Montando o código

Em main():

1. Receber o input de m e n (quantidade de linhas e colunas), para então criar a matrix de ordem m x n:

  ```c
  int m;
  int n;
  
  printf("Digite a quantidade de linhas: ");
  scanf("%d", &m);
  printf("Digite a quantidade de colunas: ");
  scanf("%d", &n);
  
  int matrix[m][n];
  ```

2. Duplo while loop para percorrer todo o vetor 2D, assim atribuindo o valor 0 para cada elemento:

  ```c
  int i = 0;
  while (i < m) {
      int j = 0;
      while (j < n) {
          matrix[i][j] = 0;
          j++;
      }
      i++;
  }
  ```
