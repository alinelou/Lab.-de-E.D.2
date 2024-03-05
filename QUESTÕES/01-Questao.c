//1. Uma aplicacao interessante de computadores e desenhar graficos e graficos de barras. Escreva um
//programa que leia cinco numeros (cada um entre 1 e 30). Para cada numero lido, seu programa
//deve imprimir uma linha contendo aquele numero de asteriscos adjacentes. Por exemplo, se seu
//programa le o numero sete, ele deve imprimir *******.

#include <stdio.h>

int A(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return A(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return A(m - 1, A(m, n - 1));
    } else {
        return -1; 
    }
}

void apresentarResultados(int a, int b) {
    for (int x = 0; x < a; x++) {
        for (int y = 0; y < b; y++) {
            printf("A(%d, %d) = %d\n", x, y, A(x, y));
        }
    }
}

int main() {
    int a, b;


    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);


    apresentarResultados(a, b);

    return 0;
}
