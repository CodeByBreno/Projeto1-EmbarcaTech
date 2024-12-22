#include <stdio.h>
#include <stdlib.h>
 
int main()
{

    int UnidadeInicial = 0;
    int UnidadeConversao = 0;
    float ValorInicial = 0.0;
    float ValorFinal = 0.0;

    printf("Selecione a escala em que se encontra o valor a ser convertido:\n");
    printf("1 - Quilometro (Km)\n");
    printf("2 - Hectômetro (Hm)\n");
    printf("3 - Decâmetro (Dam)\n");
    printf("4 - Metro (m)\n");
    printf("5 - Decimetro (dm)\n");
    printf("6 - Centimetro (cm)\n");
    printf("7 - Milimetro (mm)\n");
    scanf("%d", &UnidadeInicial);

    while (UnidadeInicial < 1 || UnidadeInicial > 7)
    {
        printf("Valor invalido tente novamente\n");
        scanf("%d", &UnidadeInicial);
    }

    system("cls");

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &ValorInicial);

    while ( ValorInicial <= 0 )  
    {
        printf("Valor invalido tente novamente: ");
        scanf("%f", &ValorInicial);
    }

    system("cls");

    printf("Selecione a escala em que o valor sera convertido:\n");
    printf("1 - Quilometro (Km)\n");
    printf("2 - Hectômetro (Hm)\n");
    printf("3 - Decâmetro (Dam)\n");
    printf("4 - Metro (m)\n");
    printf("5 - Decimetro (dm)\n");
    printf("6 - Centimetro (cm)\n");
    printf("7 - Milimetro (mm)\n");
    scanf("%d", &UnidadeConversao);

    while (UnidadeConversao < 1 || UnidadeConversao > 7)
    {
        printf("Valor invalido tente novamente\n");
        scanf("%d", &UnidadeConversao);
    }


}
     