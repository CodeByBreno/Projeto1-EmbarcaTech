#include <stdio.h>
#include <stdlib.h>

int UnidadeInicial = 0, UnidadeConversao = 0, opcao = 0;
float ValorInicial = 0.0, resultado;

void converter_Unidade_De_Comprimento()
{

    printf("Selecione a unidade do valor original:\n");
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

    while (ValorInicial <= 0)
    {
        printf("Valor nulo ou invalido tente novamente: ");
        scanf("%f", &ValorInicial);
    }

    system("cls");

    printf("Selecione a unidade em que o valor sera convertido:\n");
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

    if (UnidadeInicial == UnidadeConversao)
    {
        printf("\nA unidade inicial e final são iguais. Portanto o valor se mantem %d\n", ValorInicial);
        return;
    }
    switch (UnidadeInicial)
    {
    case 1:
        switch (UnidadeConversao)
            {
            case 2:
                resultado = ValorInicial*10;
                break;
            case 3:
                resultado =ValorInicial*100;
                break;
            case 4:
                resultado = ValorInicial*1000;
                break;
            case 5:
                resultado = ValorInicial*10000;
                break;
            case 6:
                resultado = ValorInicial*10000;
                break;
            case 7:
                resultado = ValorInicial*10000;
                break;
            }
        break;
    case 2:
        switch (UnidadeConversao)
            {
            case 1:
                resultado = ValorInicial/10;
                break;
            case 3:
                resultado = ValorInicial*10;
                break;
            case 4:
                resultado = ValorInicial*100;
                break;
            case 5:
                resultado = ValorInicial*1000;
                break;
            case 6:
                resultado = ValorInicial*1000;
                break;
            case 7:
                resultado = ValorInicial*1000;
                break;
            }
        break;
    case 3:
        switch (UnidadeConversao)
            {
            case 1:
                resultado = ValorInicial/100;
                break;
            case 2:
                resultado = ValorInicial/10;
                break;
            case 4:
                resultado = ValorInicial*10;
                break;
            case 5:
                resultado = ValorInicial*100;
                break;
            case 6:
                resultado = ValorInicial*100;
                break;
            case 7:
                resultado = ValorInicial*100;
                break;
            }
        break;
    case 4:
        switch (UnidadeConversao)
            {
            case 1:
                resultado = ValorInicial/1000;
                break;
            case 2:
                resultado = ValorInicial/100;
                break;
            case 3:
                resultado = ValorInicial/10;
                break;
            case 5:
                resultado = ValorInicial*10;
                break;
            case 6:
                resultado = ValorInicial*100;
                break;
            case 7:
                resultado = ValorInicial*1000;
                break;
            }
        break;
    case 5:
        switch (UnidadeConversao)
            {
            case 1:
                resultado = ValorInicial/10000;
                break;
            case 2:
                resultado = ValorInicial/1000;
                break;
            case 3:
                resultado = ValorInicial/100;
                break;
            case 4:
                resultado = ValorInicial/10;
                break;
            case 6:
                resultado = ValorInicial*10;
                break;
            case 7:
                resultado = ValorInicial*100;
                break;
            }
        break;
    case 6:
        switch (UnidadeConversao)
            {
            case 1:
                resultado = ValorInicial/100000;
                break;
            case 2:
                resultado = ValorInicial/10000;
                break;
            case 3:
                resultado = ValorInicial/1000;
                break;
            case 4:
                resultado = ValorInicial/100;
                break;
            case 5:
                resultado = ValorInicial/10;
                break;
            case 7:
                resultado = ValorInicial*10;
                break;
            }
        break;
    case 7:
        switch (UnidadeConversao)
            {
            case 1:
                resultado = ValorInicial/1000000;
                break;
            case 2:
                resultado = ValorInicial/100000;
                break;
            case 3:
                resultado = ValorInicial/10000;
                break;
            case 4:
                resultado = ValorInicial/1000;
                break;
            case 5:
                resultado = ValorInicial/100;
                break;
            case 6:
                resultado = ValorInicial/10;
                break;
            }
        break;
    }
    system("cls");
    printf("Numero inicial: %f\n", ValorInicial);
    printf("Numero final: %f\n", resultado);
}

int main()
{
    do
    {
        printf("\nMenu Principal Conversor Unidade de Comprimento\n");
        printf("1. Converter Unidade de Comprimento\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            converter_Unidade_De_Comprimento();
            break;
        case 2:
            printf("\nEncerrando o programa.\n");
            break;
        default:
            system("cls");
            printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
