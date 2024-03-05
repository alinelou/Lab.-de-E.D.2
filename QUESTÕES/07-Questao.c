//7. Escreva uma funcao recursiva para calcular a funcao isPrime(n) que retorna 1 caso n for primo e
//0 caso n nao for primo.

#include<stdio.h>

int isPrime(int n, int x);

int main(){
    int n;
   
    scanf("%d", &n);
    isPrime(n, n/2);
   
    return 0;
}

int isPrime(int n, int x){
    if(x==1){
        printf("isPrime");
        return 1;
    }else if(n%x==0){
        printf("noPrime");
        return 0;
    }else{
        return isPrime(n, x-1);
    }
    }
