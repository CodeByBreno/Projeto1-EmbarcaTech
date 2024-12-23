/*
    Conversor de Velocidade
*/

char *unidadeVelocidade(int value)
{
    switch (value)
    {
    case 1:
        return "km/h";
    case 2:
        return "m/s";
    case 3:
        return "mph";
    default:
        printf("[ERROR] Invalid unit speed option\n");
        break;
    }
}

int conversorVelocidade()
{
    int entrada, saida;
    float velocidade, resultado;

    printf("Conversor de Velocidade\n");
    printf("Selecione a unidade de entrada: \n");
    printf("1. km/h\n");
    printf("2. m/s\n");
    printf("3. mph\n");
    printf("Opção: ");
    scanf("%d", &entrada);

    printf("\nSelecione a unidade de saída: \n");
    printf("1. km/h\n");
    printf("2. m/s\n");
    printf("3. mph\n");
    printf("Opção: ");
    scanf("%d", &saida);

    printf("\nValor da velocidade: ");
    scanf("%f", &velocidade);

    switch (entrada)
    {
    case 1:
        if (saida == 2)
        {
            resultado = velocidade / 3.6;
            break;
        }
        else if (saida == 3)
            resultado = velocidade / 1.609;
        break;

    case 2:
        if (saida == 1)
        {
            resultado = velocidade * 3.6;
        }
        else if (saida == 3)
        {
            resultado = velocidade * 2.237;
        }

    case 3:
        if (saida == 1)
        {
            resultado = velocidade * 1.609;
            break;
        }
        else if (saida == 2)
        {
            resultado = velocidade * 0.44704;
            break;
        }
    default:
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("O valor convertido é: %.2f %s\n", resultado, unidadeVelocidade(saida));
    printf("(convertido de %.2f %s)\n", velocidade, unidadeVelocidade(entrada));

    return 0;
}