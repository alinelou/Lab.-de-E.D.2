//3. Um triangulo retangulo pode ter lados inteiros. O conjunto de tres valores inteiros para os lados de
//um triangulo retangulo e chamado de triplo pitagorico. Esses tres lados devem satisfazer a relacao
//de que a soma dos quadrados de dois dos lados e igual ao quadrado da hipotenusa. Encontre todos
//os triplos pitagoricos para cateto1, cateto2 e a hipotenusa, todos com ate o valor de n, indicado
//como parametro.

#include <stdio.h>

void encontrarTriplosPitagoricos(int n) {
    printf("Triplos Pitagoricos para valores ate %d:\n", n);

    for (int cateto1 = 1; cateto1 <= n; cateto1++) {
        for (int cateto2 = cateto1 + 1; cateto2 <= n; cateto2++) {
            for (int hipotenusa = cateto2 + 1; hipotenusa <= n; hipotenusa++) {
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    encontrarTriplosPitagoricos(n);

    return 0;
}
