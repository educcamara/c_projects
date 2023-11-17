#include <stdio.h>
//#include <string.h>
//#include <math.h>

void print_array(int m, int array[m]);
void print_matrix(int m, int n, int array[m][n]);

int main() {
    int m;
    int n;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &n);

    int matrix[m][n];

    int i = 0;
    while (i < m) {
        int j = 0;
        while (j < n) {
            matrix[i][j] = 0;
            j++;
        }
        i++;
    }
    print_matrix(m, n, matrix);

    return 0;
}

void print_array(int m, int array[m]) {
    int i = 0;
    while (i < m) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}

void print_matrix(int m, int n, int array[m][n]) {
    int i = 0;
    while (i < m) {
        print_array(n, array[i]);
        i++;
    }
}