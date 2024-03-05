//5. Escreva dois programas que recebem como parametro tres inteiros representando os coeficientes
//de uma funcao do segundo grau e execute:
//(a) O teste para saber se essa fun¸c˜ao tem ra´ızes reais;
//(b) O valor das ra´ızes reais.

#include<stdio.h>
#include<math.h>
#include<locale.h>

typedef struct{
    float x1;
    float x2;
}raiz;

raiz x1x2 (int a, int b, int c);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    raiz raiz;
   
    do{
        printf("Informe os valores dos coeficientes a, b e c\n");
        scanf("%i %i %i", &a, &b, &c);
            if(a == 0){
            printf("\nO coeficiente a tem que ser diferente de 0\n\n");
            getchar();          
            }
    }while(a==0);
   
    if(pow(b, 2)-(4*a*c) >= 0){
        printf("a função %ix²+%ix+%i=0 possui raízes reais!\n", a, b, c);
        raiz = x1x2(a, b, c);
        printf("O valor das raízes é x=%.1f e x=%.1f", raiz.x1, raiz.x2);
    }else{
        printf("a função %i x²+%i x+%i=0 não possui raízes reais!\n", a, b, c);
    }
   
    return 0;
}

raiz x1x2 (int a, int b, int c){
    raiz raiz;
   
    raiz.x1 = (-b + (sqrt(pow(b, 2)-4*a*c)))/(2*a);
    raiz.x2 = (-b - (sqrt(pow(b, 2)-4*a*c)))/(2*a);
   
    return raiz;
}
