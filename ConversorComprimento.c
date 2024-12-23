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
        printf("Digite o valor a ser convertido: \n");
        scanf("%f", &ValorInicial);
        if (ValorInicial <= 0)
        {
            system("cls");
            printf("Valor nulo ou invalido tente novamente\n");
        }
    } while (ValorInicial <= 0);

    system("cls");

    do
    {
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
    printf("Numero inicial: %f\n", ValorInicial);
    printf("Numero final: %f\n", resultado);
}