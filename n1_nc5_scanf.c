#include <stdio.h>

// Um pouco de entrada e saídade de dados:

int main () {

    int idade;
    char nome[30];
    float altura;
    char opcao;
    double peso;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite sua opção: ");
    scanf(" %c", &opcao);
    printf("A opção escolhida foi: %c\n", opcao);




    /*
    \n: Assim como no Python, é um caractere de escape.

    printf("%formato1 %formato2 %formato3, variavel1, variavel2, variavel3");

    %d: Imprime um número iteiro no formato decimal.
    %i: Equivale a %d.
    %f: imprime um número de ponto flutuante no formato padrão.
        %.2: Delimita a quantidade de casas decimais.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.

    Sintaxe scanf:
    scanf("%formato1 %formato2 %formato3", &variavel1, variavel2, &variavel3)

    scanf: Faz a Leitura da entrada de um dado/variável sem retorno no terminal.
    &: Indica ponteiros de memória e deve ser usado na frente das variáveil, com exceções.

    » Na linguagem C, quando trabalhamos com strings, ela interpreta que o espaço é uma finalização,
    assim como apertar o enter no teclado. Para ler nomes compostos será preciso usar expreções
    regulares junto ao especificador de formato.

    */



     


}