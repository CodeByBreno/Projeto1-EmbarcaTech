extern char lixo;

char *unidadeTemperatura(int value)
{
    switch (value)
    {
    case 1:
        return "oC";
    case 2:
        return "oF";
    case 3:
        return "K";
    default:
        printf("[ERROR] Invalid temperature type\n");
        break;
    }
}

void conversorTemperatura()
{
    int unidade_origem, unidade_destino;
    float temperatura, resultado;

    printf("\nConversor de Unidades de Temperatura\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Opcao: ");
    scanf("%d", &unidade_origem);
    system("cls");

    printf("\nEscolha a unidade de destino:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Opcao: ");
    scanf("%d", &unidade_destino);
    system("cls");

    printf("\nDigite o valor da temperatura: ");
    scanf("%f", &temperatura);
    system("cls");

    if (unidade_origem == unidade_destino)
    {
        printf("\nA unidade de origem e destino sao iguais. O valor permanece: %.2f %s\n", temperatura, unidadeTemperatura(unidade_origem));
        return;
    }

    switch (unidade_origem)
    {
    case 1: // Celsius
        if (unidade_destino == 2)
        { // Celsius -> Fahrenheit
            resultado = (temperatura * 9 / 5) + 32;
        }
        else if (unidade_destino == 3)
        { // Celsius -> Kelvin
            resultado = temperatura + 273.15;
        }
        break;
    case 2: // Fahrenheit
        if (unidade_destino == 1)
        { // Fahrenheit -> Celsius
            resultado = (temperatura - 32) * 5 / 9;
        }
        else if (unidade_destino == 3)
        { // Fahrenheit -> Kelvin
            resultado = ((temperatura - 32) * 5 / 9) + 273.15;
        }
        break;
    case 3: // Kelvin
        if (unidade_destino == 1)
        { // Kelvin -> Celsius
            resultado = temperatura - 273.15;
        }
        else if (unidade_destino == 2)
        { // Kelvin -> Fahrenheit
            resultado = ((temperatura - 273.15) * 9 / 5) + 32;
        }
        break;
    default:
        printf("\nUnidade de origem invalida!\n");
        return;
    }

    printf("\nResultado: %.2f %s\n", resultado, unidadeTemperatura(unidade_destino));
    printf("(valor original: %.2f %s)\n", temperatura, unidadeTemperatura(unidade_origem));

    pressToContinue();
}

// int main()
// {
//     int opcao;

//     do
//     {
//         printf("\nMenu Principal\n");
//         printf("1. Converter temperatura\n");
//         printf("2. Sair\n");
//         printf("Escolha uma opcao: ");
//         scanf("%d", &opcao);

//         switch (opcao)
//         {
//         case 1:
//             converter_temperatura();
//             break;
//         case 2:
//             printf("\nEncerrando o programa.\n");
//             break;
//         default:
//             printf("\nOpcao invalida! Tente novamente.\n");
//         }
//     } while (opcao != 2);

//     return 0;
// }
