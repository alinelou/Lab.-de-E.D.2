//8. Escreva uma funcao que recebe como entrada um valor inteiro e retorna outro inteiro com os
//valores revertidos. Por exemplo:
//f (1234) = 4321

#include <stdio.h>

int inverterDigitos(int numero) {
    int resultado = 0;

    while (numero != 0) {
        resultado = resultado * 10 + numero % 10;
        numero /= 10;
    }

    return resultado;
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    int resultado = inverterDigitos(numero);
    printf("O numero invertido é: %d\n", resultado);

    return 0;
}
