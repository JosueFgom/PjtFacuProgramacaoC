#include <stdio.h>

int main (){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    // como o professor fez:

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);

    // Como eu quis fazer inicialmente:
    // printf("Segue os dados do Aluno\n");
    // printf("Matricula: %d\n", matricula);
    // printf("Nome: %s\n", nome);
    // printf("Idade: %d\n", idade);
    // printf("Altura: %.2f\n", altura);
    return 0;
    
}