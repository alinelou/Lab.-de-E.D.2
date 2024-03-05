//2. Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
//O programa deve imprimir 10 caracteres por linha.

#include <stdio.h>

struct CaractereASCII {
    char caractere;
    int valorASCII;
};

int main() {
    struct CaractereASCII caracteres[128];

    for (int i = 0; i < 128; i++) {
        caracteres[i].caractere = (char)i;
        caracteres[i].valorASCII = i;
    }

    for (int i = 0; i < 128; i++) {
        printf("%c:%3d  ", caracteres[i].caractere, caracteres[i].valorASCII);

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
