# Cheat Sheet para C

## Sumário

- [Comandos Gerais](#comandos-gerais)
- [Tipos de Dados](#tipos-de-dados)

## Comandos Gerais

### Comandos Básicos

- ```// Comentário```
- ```/*Comentário multilinha*/```
- ```#include```: Comando para incluir bibliotecas no arquivo
    ```#include <stdio.h>```: Biblioteca padrão de saída de dados
- ```const ...```: Constante (Convenção em Caixa Alta)

### Formatação de saída de dados

- ```\n```: Quebra de linha
- ```\t```: Tab
- ```%d```: Inteiro
- ```%f```: Float
- ```%c```: Caractere
- ```%s```: String
- ```%u```: Unsigned
- ```%llu```: Unsigned long long
- ```%.2f```: 2 sendo o número de casas decimais
- ```%2```: 2 sendo o número de caracteres
- ```%02```: 2 sendo o número de caracteres, preenchendo com 0
- ```%-2```: 2 sendo o número de caracteres, alinhando à esquerda

### Operadores Matemáticos

- ```+```: Soma
- ```-```: Subtração
- ```*```: Multiplicação
- ```/```: Divisão
- ```%```: Módulo (Resto da divisão)
- ```++```: Incremento
- ```--```: Decremento

> **!! Importante**
> Atribuir a chamada de (float) antes de uma variável inteira para sua divisão em números reais

## Tipos de Dados

### Inteiros

Display em %d
Display em %u (Unsigned)

Ints

- ```int```: 4 bytes *(-2bi -- +2bi)*
- ```unsigned int```: 4 bytes *(0 -- +4bi)*

Shorts

- ```short```: 2 bytes *(-32k -- 32k)*
- ```unsigned short```: 2 bytes *(0 -- +64k)*

Longs

- ```long long```: 8 bytes
- ```unsigned long long```: 8 bytes *(0 -- +18qi)*
  *Terminar o número com 'U'*

### Floats

Display em %f

- ```float```: 4 bytes *(6-7 casas decimais)*
- ```double```: 8 bytes *(15-16 casas decimais)*

### Caracteres

Display em %c ou em %d (ASCII)

- ```char```: 1 byte *(-128 -- +127)*
- ```unsigned char```: 1 byte *(0 -- +255)*

```c
    char letter = 'a';
    printf("A letra é %c\n", letter);
    // Saída: A letra é a
    printf("A letra é %d\n", letter);
    // Saída: A letra é 97

```

Strings: Vetor de caracteres
Display em %s

```c
    char name[] = "João";
    printf("O nome é %s\n", name);
    // Saída: O nome é João
```

### Booleanos

Display em %d
```#include <stdbool.h>```

- ```bool```: 1 byte *(0 ou 1)*

```c
    bool isTrue = true;
    printf("O valor é %d\n", isTrue);
    // Saída: O valor é 1
```
