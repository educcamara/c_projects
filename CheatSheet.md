# Cheat Sheet para C

## Sumário

- [Comandos Gerais](#comandos-gerais)
- [Tipos de Dados](#tipos-de-dados)
- [Input](#input)
- [Ifs](#ifs)
- [Switch](#switch)
- [Protótipo de Função](#protótipo-de-função)

## Comandos Gerais

- [Comandos Básicos](#comandos-básicos)
- [Formatação de Saída de Dados](#formatação-de-saída-de-dados)
- [Operadores Matemáticos](#operadores-matemáticos)

### Comandos Básicos

- ```// Comentário```
- ```/*Comentário multilinha*/```
- ```#include```: Comando para incluir bibliotecas no arquivo
    ```#include <stdio.h>```: Biblioteca padrão de saída de dados
- ```const ...```: Constante (Convenção em Caixa Alta)
- Operadores Lógicos:
  - ```==```: Igual
  - ```!=```: Diferente
  - ```&&```: E
  - ```||```: Ou
  - ```!```: Não

### Formatação de Saída de Dados

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

### Manipulação de Strings

Necessário o módulo `<string.h>`

> Exemplo:
> ```c
> char str1[] = "Cade";
> char str2[] = "Cadu";
> ```

- `strupr(str1)` -> `str1 = "CADE"`
- `strlwr(str1)` -> `str1 = "cadu"`
- `strcat(str1, str2)` -> `str1 = "CadeCadu"`
- `strncat(str1, str2, 1)` -> `str1 = "CadeC"`
- `strcpy(str1, str2)` -> `str1 = "Cadu"`
- `strncpy(str1, str2, 1)` -> `str1 = "C"`


- `strset(str1, '?')` -> `str1 = "????"`
- `strnset(str1, 'A', 1)` -> `str1 = "Aade"`
- `strrev(str1)` -> `str1 = "udaC"`


- `int res = strlen(str1)` -> `res = 4`
- `int res = strcmp(str1, str2)` -> `res = -1`
  - compara se strings são iguais
  - retorna 0 se forem iguais, retorna -1 caso contrário
- `int res = strncmp(str1, str2, 3)` -> `res = 0`
  - compara os n primeiros dígitos
- `int res = strcmpi(str1, str2)`
  - Não é *case sensitive*

### Operadores Matemáticos

- ```+```: Soma
- ```-```: Subtração
- ```*```: Multiplicação
- ```/```: Divisão
- ```%```: Módulo (Resto da divisão)
- ```++```: Incremento
- ```--```: Decremento

Extras
Por meio do ```#include <math.h>```:

- ```pow(x, y)```: Potência
- ```sqrt(x)```: Raiz quadrada
- ```cbrt(x)```: Raiz cúbica
- ```hypot(x, y)```: Hipotenusa
- ```ceil(x)```: Arredonda para cima
- ```floor(x)```: Arredonda para baixo
- ```round(x)```: Arredonda para o mais próximo
- ```fabs(x)```: Valor absoluto
- ```log(x)```: Logaritmo natural
- ```log10(x)```: Logaritmo na base 10
- ```sin(x)```: Seno (Em radianos)
- ```cos(x)```: Cosseno
- ```tan(x)```: Tangente

> **!! Importante**
> Atribuir a chamada de (float) antes de uma variável inteira para sua divisão em números reais

## Tipos de Dados

- [Inteiros](#inteiros)
- [Floats](#floats)
- [Caracteres](#caracteres)
- [Booleanos](#booleanos)

### Inteiros

Display em %d\
Display em %u (Unsigned)

#### Ints

- ```int```: 4 bytes *(-2bi -- +2bi)*
- ```unsigned int```: 4 bytes *(0 -- +4bi)*

#### Shorts

- ```short```: 2 bytes *(-32k -- 32k)*
- ```unsigned short```: 2 bytes *(0 -- +64k)*

#### Longs

- ```long long```: 8 bytes
- ```unsigned long long```: 8 bytes *(0 -- +18qi)*
  *Terminar o número com 'U'*

### Floats

Display em %f\
Display em %lf (long float)

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

## Input

Comando `scanf` lê até um ' '

Utilizar ```fgets``` para ler strings com espaços

- Recebe 3 parâmetros: ```fgets(variavel, tamanho, stdin)```

```c
    ...
    int age;
    scanf("%d", &number);

    float number;
    scanf("%f", &number);

    char name[20];
    fgets(name, 20, stdin);
    ...
```

```c
...
#include <string.h> // Para utilizar a função strlen

...
char name[20];
fgets(name, 20, stdin);
name[strlen(name) - 1] = '\0'; // Para remover o '\n' do final da string
...

```

## Ifs

```c
    if (condition) {
        // code
    } else if (condition) {
        // code
    } else {
        // code
    }
```

### If Ternário

```c
    (condition) ? true : false;
    // Se a condição for verdadeira, retorna o primeiro valor, se não, retorna o segundo
```

## Switch

```c
    switch (variable) {
        case 1:
            // code
            break;
        case 2:
            // code
            break;
        default:
            // code
            break;
    }
```

## Protótipo de Função

Utilizar para definir a função depois do main, mas antes de sua chamada evitar que não ocorra `garbage values`

Considerado boa prática

```c
    int sum(int a, int b); // Protótipo da função

    int main() {
        int result = sum(1, 2);
        printf("%d\n", result);
        return 0;
    }

    int sum(int a, int b) { // Definição da função
        return a + b;
    }
```


## For Loops

Três Parâmetros:
- Variável Inicial
- Condição de Parada
- Adicionar ou Subtrair a variável

```c
for (int i = 1; i <= 10; i++){
    // code
}
```

## While Loops

### while() Loop

- Primeiramente checa uma condição para depois executar, se for o caso

- Repete um bloco de código quantas vezes desejar,
enquanto uma condição é verdadeira

- Pode sequer ser executado

Exemplo:
```c
// Inicializando a variável
char name[25];
printf("\nQual é o seu nome: ");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0';

while (strlen(name) == 0) {
  printf("\nQual é o seu nome: ");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';
}

```

### do while

- Primeiramente realiza o código uma vez, depois checa uma condição
para repetir