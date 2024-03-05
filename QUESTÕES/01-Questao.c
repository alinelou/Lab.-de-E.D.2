//1. Uma aplicacao interessante de computadores e desenhar graficos e graficos de barras. Escreva um
//programa que leia cinco numeros (cada um entre 1 e 30). Para cada numero lido, seu programa
//deve imprimir uma linha contendo aquele numero de asteriscos adjacentes. Por exemplo, se seu
//programa le o numero sete, ele deve imprimir *******.

#include <stdio.h>

#define MAX_NUMEROS 5
#define MAX_VALOR 30

struct Dados {
    int numeros[MAX_NUMEROS];
};

void lerNumeros(struct Dados *dados) {
    printf("Digite cinco numeros (cada um entre 1 e 30):\n");
    for (int i = 0; i < MAX_NUMEROS; i++) {
        do {
            printf("Digite o %d : ", i + 1);
            scanf("%d", &dados->numeros[i]);

            if (dados->numeros[i] < 1 || dados->numeros[i] > MAX_VALOR) {
                printf("Por favor, digite um numero entre 1 e %d.\n", MAX_VALOR);
            }
        } while (dados->numeros[i] < 1 || dados->numeros[i] > MAX_VALOR);
    }
}

void imprimirAsteriscos(struct Dados dados) {
    printf("Linhas de asteriscos:\n");
    for (int i = 0; i < MAX_NUMEROS; i++) {
        printf("%d: ", dados.numeros[i]);
        for (int j = 0; j < dados.numeros[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    struct Dados dados;

    lerNumeros(&dados);

    imprimirAsteriscos(dados);

    return 0;
}
