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
    // sintaxe scanf
    //scanf("%formato1 %formato2 , variavel1, variavel2, ...)

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O seu nome é: %s\n", nome);   

    printf("Digite uma opcao: ");
    scanf(" %c", &opcao);
    printf("A sua opção é: %s\n", opcao);   

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

