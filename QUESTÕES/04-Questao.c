//3. Um triangulo retangulo pode ter lados inteiros. O conjunto de tres valores inteiros para os lados de
//um triangulo retangulo e chamado de triplo pitagorico. Esses tres lados devem satisfazer a relacao
//de que a soma dos quadrados de dois dos lados e igual ao quadrado da hipotenusa. Encontre todos
//os triplos pitagoricos para cateto1, cateto2 e a hipotenusa, todos com ate o valor de n, indicado
//como parametro.

#include <stdio.h>

void decParaRomano(int num) {
    int valoresDecimais[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* algarismosRomanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("%3d: ", num);

    for (int i = 0; i < 9; i++) {
        while (num >= valoresDecimais[i]) {
            printf("%s", algarismosRomanos[i]);
            num -= valoresDecimais[i];
        }
    }

    printf("\n");
}

int main() {
    printf("Tabela de equivalentes de algarismos romanos para numeros decimais de 1 a 100:\n");

    for (int i = 1; i <= 100; i++) {
        decParaRomano(i);
    }

    return 0;
}
