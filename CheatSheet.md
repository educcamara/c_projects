# Cheat Sheet para C

## Sumário

- [Comandos Gerais](#comandos-gerais)
- [Tipos de Dados](#tipos-de-dados)
- [Input](#input)
- [Ifs](#ifs)
- [Switch](#switch)
- [Protótipo de Função](#protótipo-de-função)
- [For Loops](#for-loops)
- [While Loops](#while-loops)
- [Números Aleatórios](#números-aleatórios)

## Comandos Gerais

- [Comandos Básicos](#comandos-básicos)
- [Formatação de Saída de Dados](#formatação-de-saída-de-dados)
- [Manipulação de Strings](#manipulação-de-strings)
- [Operadores Matemáticos](#operadores-matemáticos)

### Comandos Básicos

- `// Comentário`
- `/*Comentário multilinha*/`
- `#include`: Comando para incluir bibliotecas no arquivo
    `#include <stdio.h>`: Biblioteca padrão de saída de dados
- `const ...`: Constante (Convenção em Caixa Alta)
- Operadores Lógicos:
  - `==`: Igual
  - `!=`: Diferente
  - `&&`: E
  - `||`: Ou
  - `!`: Não
- Operadores de Bits (bitwise operators)
  Operadores para análise de bits (números binários)
  - `&`: AND
  - `|`: OR
  - `^`: XOR
  - `<<`: Shift para a esquerda
  - `>>`: Shift para a direita

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
- [Arrays](#arrays)
- [Enums](#enums)
- [Structs](#structs)
- [Typedefs](#typedefs)

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

### Arrays

- Uma estrutura de dados que contém multiplos dados do mesmo tipo

```c

float precos[] = {5.0, 2.3, 3.3, 40, 2};
printf("$%.2f", precos[0])

// Saída: $5.00

```

#### Arrays Bi-dimensionais

```c
// Obrigatoriamente definir a quantidade máxima de elementos dos arrays internos
int matriz[][3] = {{1, 2, 3}, {4, 5, 6}};

// Se não for predefinido, determinar de antemão
int matriz[2][3];
...
```

### Structs

É um tipo de dado que permite agrupar diferentes tipos de dados sob um único nome.
Esses tipos de dados podem ser de tipos diferentes, e cada elemento dentro da `struct` é chamado de "membro".
A `struct` é uma forma eficiente de organizar dados relacionados.

Obs: Structs são definidas antes de main()

#### Sintaxe

A sintaxe básica para declarar uma `struct` em C é a seguinte:

```c
struct NomeDaStruct {
    tipo membro1;
    tipo membro2;
    // ... mais membros
};
```

#### Exemplo

Definindo a estrutura:

```c
struct Ponto {
int x;
int y;
};
```

Declarando uma variável:

```c
int main() {
    struct Ponto ponto1;

    ponto1.x = 5;
    ponto1.y = 10;

    ...
    
    return 0;
}
```

### Enums

Uma construção que permite criar um conjunto de constantes nomeadas, 
associando nomes legíveis a valores inteiros. Enums fornecem uma maneira de tornar o código mais legível,
substituindo números mágicos por rótulos significativos.

#### Sintaxe

Definir antes de main()

```c
enum Nome {CONST1 = int, CONST2 = int, ...};
// Caso não atribua um valor inteiro, o padrão será 0, 1, 2, 3..
```

#### Exemplo

```c
enum Dias {DOM = 1, SEG = 2, TER = 3, QUA = 4, QUI = 5, SEX = 6, SAB = 7};

int main() {
    enum Dias hoje = DOM;
    
    if (hoje == SAB || hoje == DOM) {
        printf("É fim de semana!!")
    }
    
    return 0;
}
// Out: É fim de semana!!
```

### Typedefs

Usado para criar *alias* (sinônimos) para certos tipos de dados. 
Permite criar nomes alternativos para tipos de dados complexos, 
tornando o código mais legível e facilitando futuras alterações.

#### Sintaxe

Predefinir antes de main()

```c
typedef tipo Nome;
```

#### Exemplo

```c
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

typedef char[25] User;

...

int main() {
    Pessoa pessoa1;
    User user1;
    
    ...
    
    return 0;
}
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

```c
char name[64];

do {
    // Nome:
    fgets(name, 64, stdin); // Exemplo: Cadu 
} while (strlen(name) == 1); // '\n'

printf("Seu nome é %s", name);

return 0;

// Saída: Seu nome é Cadu (com '\n')

```


## Números Aleatórios

A geração de números aleatórios é realizada através da biblioteca `stdlib.h`. 
A função principal para isso é a `rand()`, que retorna um número inteiro pseudoaleatório entre 0 e `RAND_MAX`. 
Porém, para obter uma sequência de números mais verdadeiramente aleatórios, a função `srand()` é usada para inicializar a semente.

### Exemplo

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente para a função rand()
    srand(time(NULL));

    // Gera e imprime 5 números aleatórios
    for (int i = 0; i < 5; i++) {
        int numero_aleatorio = rand();
        printf("Número Aleatório %d: %d\n", i + 1, numero_aleatorio);
    }

    return 0;
}
```

- `srand(time(NULL))` usa o tempo atual como semente para 
garantir que a sequência de números gerada seja diferente em cada execução. 
- `rand()` é usada para gerar números aleatórios.

Para limitar o intervalo dos números gerados, a operação `%` (módulo) pode ser aplicada:

```c
int numero_aleatorio_limitado = rand() % 100;  // Gera um número entre 0 e 99
```
