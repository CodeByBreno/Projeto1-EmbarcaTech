/*
    Conversor de Massa
    by Pablo Fernandes Costa de Marinho
*/

extern char lixo;

float converter_massa(float valor, char unidade_origem[], char unidade_destino[])
{
    // Fatores de conversão em relação ao quilograma
    float fator_origem = 0, fator_destino = 0;

    // Determinar o fator de conversão da unidade de origem
    if (strcmp(unidade_origem, "quilograma") == 0)
    {
        fator_origem = 1.0;
    }
    else if (strcmp(unidade_origem, "grama") == 0)
    {
        fator_origem = 1000.0;
    }
    else if (strcmp(unidade_origem, "tonelada") == 0)
    {
        fator_origem = 0.001;
    }
    else
    {
        return -1; // Unidade inválida
    }

    // Determinar o fator de conversão da unidade de destino
    if (strcmp(unidade_destino, "quilograma") == 0)
    {
        fator_destino = 1.0;
    }
    else if (strcmp(unidade_destino, "grama") == 0)
    {
        fator_destino = 1000.0;
    }
    else if (strcmp(unidade_destino, "tonelada") == 0)
    {
        fator_destino = 0.001;
    }
    else
    {
        return -1; // Unidade inválida
    }

    // Converter o valor para quilogramas e depois para a unidade de destino
    float valor_em_kg = valor / fator_origem;
    float valor_convertido = valor_em_kg * fator_destino;

    return valor_convertido;
}

int isValidMassUnit(char *unit)
{
    if (strcmp(unit, "grama"))
    {
        return 1;
    }
    if (strcmp(unit, "quilograma"))
    {
        return 1;
    }
    if (strcmp(unit, "tonelada"))
    {
        return 1;
    }
    return 0;
}

int conversorMassa()
{
    float valor, resultado;
    char unidade_origem[20], unidade_destino[20];

    printf("Conversor de Unidades de Massa\n");

    // Entrada do usuário
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    do
    {
        printf("\nEscolha uma das unidades: quilograma, grama, tonelada\n");
        printf("Digite a unidade de origem: ");
        scanf("%s", unidade_origem);
    } while (!isValidMassUnit(unidade_origem));

    do
    {
        printf("\nEscolha uma das unidades: quilograma, grama, tonelada\n");
        printf("Digite a unidade de destino: ");
        scanf("%s", unidade_destino);
    } while (!isValidMassUnit(unidade_destino));

    system("cls");

    // Realizar a conversão
    resultado = converter_massa(valor, unidade_origem, unidade_destino);

    if (resultado == -1)
    {
        printf("Erro ao realizar conversão!\n");
    }
    else
    {
        printf("%.2f %ss equivalem a %.2f %ss.\n", valor, unidade_origem, resultado, unidade_destino);
    }

    pressToContinue();

    return 0;
}