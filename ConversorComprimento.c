#include "utils.h"
extern char lixo;

char *unitEquivalentComprimento(int number)
{
    switch (number)
    {
    case 1:
        return "Km";
    case 2:
        return "Hm";
    case 3:
        return "Dam";
    case 4:
        return "m";
    case 5:
        return "dm";
    case 6:
        return "cm";
    case 7:
        return "mm";
    default:
        printf("[ERROR] Equivalent Length unit not present\n");
        break;
    }
}

int selecionarUnidade()
{
    int unidade;
    printf("1 - Quilometro (Km)\n");
    printf("2 - Hectometro (Hm)\n");
    printf("3 - Decametro (Dam)\n");
    printf("4 - Metro (m)\n");
    printf("5 - Decimetro (dm)\n");
    printf("6 - Centimetro (cm)\n");
    printf("7 - Milimetro (mm)\n");

    scanf("%d", &unidade);
    system("cls");
    return unidade;
}

float convertLength(float value, int originalUnit, int conversionUnit)
{
    return value * pow(10, conversionUnit - originalUnit);
}

void conversorComprimento()
{
    system("cls");

    int UnidadeInicial = 0, UnidadeConversao = 0;
    float ValorInicial = 0.0, resultado;

    do
    {
        flushStdin();

        printf("Selecione a unidade do valor original: \n");
        UnidadeInicial = selecionarUnidade();
        if (UnidadeInicial < 1 || UnidadeInicial > 7)
        {
            system("cls");
            printf("Opcao invalida tente novamente \n");
        }
    } while (UnidadeInicial < 1 || UnidadeInicial > 7);

    system("cls");

    do
    {
        flushStdin();

        printf("Digite o valor a ser convertido: \n");
        scanf("%f", &ValorInicial);
        system("cls");
        if (ValorInicial <= 0)
        {
            printf("Valor nulo ou invalido tente novamente\n");
        }
    } while (ValorInicial <= 0);

    system("cls");

    do
    {
        flushStdin();

        printf("Selecione a unidade em que o valor sera convertido:\n");
        UnidadeConversao = selecionarUnidade();
        if (UnidadeConversao < 1 || UnidadeConversao > 7)
        {
            system("cls");
            printf("Opcao invalida tente novamente \n");
        }
    } while (UnidadeConversao < 1 || UnidadeConversao > 7);

    if (UnidadeInicial == UnidadeConversao)
    {
        printf("\nA unidade inicial e final são iguais. Portanto o valor se mantem: %f\n", ValorInicial);
        return;
    }

    resultado = convertLength(ValorInicial, UnidadeInicial, UnidadeConversao);

    system("cls");
    printf("Numero inicial: %f %s\n", ValorInicial, unitEquivalentComprimento(UnidadeInicial));
    printf("Numero final: %f %s\n", resultado, unitEquivalentComprimento(UnidadeConversao));

    pressToContinue();
}