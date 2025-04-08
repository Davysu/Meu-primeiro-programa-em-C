#include <stdio.h>

int main() {
    //Sintaxe padrão printf
    //printf("Olá, Mundo!");
    //printf("texto com formatação", variavel1, variavel2,...);
    //printf("Olá, Mundo!\n");

    int idade = 26;
    float altura = 1.82;
    char opcao = 'S';
    char nome[20] = "Davyson";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é :%c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d. 
    %f: Imprime um número de ponto flutuante no formato padrão. 
    %e: Imprime um número de ponto flutuante na notação científica. 
    %c: Imprime um único caractere. 
    %s: imprime uma cadeia (string) de caracteres.
    */
    
}

