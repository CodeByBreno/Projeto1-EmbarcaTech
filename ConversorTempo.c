extern char lixo;

// Função para converter segundos em minutos e horas
void converterTempo(int segundos)
{
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = segundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, seg);
}

// Função para converter horas em minutos
int converterHorasParaMinutos(int horas)
{
    return horas * 60;
}

// Função para converter minutos em segundos
int converterMinutosParaSegundos(int minutos)
{
    return minutos * 60;
}

// Função para converter minutos em horas
float converterMinutosParaHoras(int minutos)
{
    return minutos / 60.0;
}

int conversorTempo()
{
    int opcao, segundos, horas, minutos;
    char continuar;

    do
    {
        printf("Selecione a opção de conversão:\n");
        printf("1. Converter segundos para horas, minutos e segundos\n");
        printf("2. Converter horas para minutos\n");
        printf("3. Converter minutos para segundos\n");
        printf("4. Converter minutos para horas\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            printf("Digite o tempo em segundos: ");
            scanf("%d", &segundos);
            converterTempo(segundos);
            break;
        case 2:
            printf("Digite o tempo em horas: ");
            scanf("%d", &horas);
            minutos = converterHorasParaMinutos(horas);
            printf("%d horas equivalem a %d minutos.\n", horas, minutos);
            break;
        case 3:
            printf("Digite o tempo em minutos: ");
            scanf("%d", &minutos);
            segundos = converterMinutosParaSegundos(minutos);
            printf("%d minutos equivalem a %d segundos.\n", minutos, segundos);
            break;
        case 4:
            printf("Digite o tempo em minutos: ");
            scanf("%d", &minutos);
            float horasConvertidas = converterMinutosParaHoras(minutos);
            printf("%d minutos equivalem a %.2f horas.\n", minutos, horasConvertidas);
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
        printf("Digite algo para continuar...\n");
        scanf("%c", &lixo);
        system("cls");

        printf("Deseja fazer outra conversão? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Obrigado por usar nosso programa (By Rivaldo Matias.)\n");

    while ((getchar()) != '\n')
        ;
    printf("Digite algo para continuar...\n");
    scanf(" %c", &lixo);

    return 0;
}
