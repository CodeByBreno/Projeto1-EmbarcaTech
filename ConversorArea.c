float convertArea(float value, int type)
{
    switch (type)
    {
    case 1:
        return value * 10000;
    case 2:
        return value / 10000;
    default:
        printf("[ERROR] Invalid area internal option\n");
        return -1.0;
    };
}

void conversorArea()
{
    int option;
    float value, result;

    printf("Insira a conversao que pretende fazer\n");
    printf("1. Metros Quadrados(m2) para centimetros quadrados(cm2)\n");
    printf("2. Centimetros quadrados(cm2) para metros quadrados(m2)\n");

    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Insira a area em metros quadrados: (sera convertido para cm2)\n");
        scanf("%f", &value);
        result = convertArea(value, 1);
        printf("Resultado: %.3f cm2\n", result);
        break;
    case 2:
        printf("Insira a area em centimetros quadrados: (sera convertido para m2)\n");
        scanf("%f", &value);
        result = convertArea(value, 2);
        printf("Resultado: %.3f m2\n", result);
        break;
    default:
        printf("[ERROR] Opcao invalida!\n");
        break;
    };
}
