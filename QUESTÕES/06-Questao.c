//6. Escreva uma funcao recusiva para calcular o Maximo Divisor de dois numeros
//inteiros.

#include <stdio.h>


int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int num1, num2;

    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    int resultado = mdc(num1, num2);
    printf("O Maximo Divisor Comum (MDC) de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
