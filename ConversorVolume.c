extern char lixo;

void litrosParaOutros(double litros)
{
    printf("\n%.2f litros equivalem a:\n", litros);
    printf("- %.2f mililitros\n", litros * 1000);
    printf("- %.6f metros cubicos\n", litros / 1000);
}
void mililitrosParaOutros(double mililitros)
{
    printf("\n%.2f mililitros equivalem a:\n", mililitros);
    printf("- %.2f litros\n", mililitros / 1000);
    printf("- %.9f metros cubicos\n", mililitros / 1000000);
}
void metrosCubicosParaOutros(double metrosCubicos)
{
    printf("\n%.6f metros cubicos equivalem a:\n", metrosCubicos);
    printf("- %.2f litros\n", metrosCubicos * 1000);
    printf("- %.2f mililitros\n", metrosCubicos * 1000000);
}
int conversorVolume()
{
    int opcao;
    double valor;

    printf("Conversor de Valores de Volume\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Litros para Mililitros e Metros Cubicos\n");
    printf("2 - Mililitros para Litros e Metros Cubicos\n");
    printf("3 - Metros Cubicos para Litros e Mililitros\n");
    printf("0 - Sair\n");

    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);
    system("cls");

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em litros: ");
        scanf("%lf", &valor);
        litrosParaOutros(valor);
        break;

    case 2:
        printf("Digite o valor em mililitros: ");
        scanf("%lf", &valor);
        mililitrosParaOutros(valor);
        break;

    case 3:
        printf("Digite o valor em metros cubicoss: ");
        scanf("%lf", &valor);
        metrosCubicosParaOutros(valor);
        break;

    default:
        printf("Opcao invalida\n");
    }

    while ((getchar()) != '\n')
        ;
    printf("Digite algo para continuar...\n");
    scanf(" %c", &lixo);

    return 0;
}