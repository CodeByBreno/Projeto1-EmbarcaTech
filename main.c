#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#include "ConversorComprimento.c"
#include "ConversorVolume.c"
#include "ConversorTemperatura.c"
#include "ConversorVelocidade.c"
#include "ConversorPotencia.c"
#include "ConversorArea.c"

int running = 1;
int convertionOption = 0;

void menuConvertion()
{
    printf("Escolha o tipo de conversão que deseja fazer: \n");
    printf("1. Unidades de comprimento (metro, centimetro, milimetro)\n");
    printf("2. Unidades de massa (quilograma, grama, tonelada)\n");
    printf("3. Unidades de volume (litro, mililitro, metros cubicos)\n");
    printf("4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)\n");
    printf("5. Unidades de velocidade (km/h, m/s, mph)\n");
    printf("6. Unidades de potencia Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
    printf("7. Unidades de area (metro quadrado, centimetro quadrado)\n");
    printf("8. Unidades de tempo (segundos, minutos, horas)\n");

    scanf("%d", &convertionOption);
}

void selectConvertion()
{
    switch (convertionOption)
    {
    case 1:
        conversorComprimento();
        break;
    case 2:
        printf("Em desenvolvimento...\n");
        break;
    case 3:
        conversorVolume();
        break;
    case 4:
        conversorTemperatura();
        break;
    case 5:
        conversorVelocidade();
        break;
    case 6:
        conversorPotencia();
        break;
    case 7:
        conversorArea();
        break;
    case 8:
        printf("Em desenvolvimento...\n");
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}

void menuExit()
{
    char answer;
    printf("\nDeseja realizar outra conversao ? [Y/n]\n");
    scanf(" %c", &answer);
    if (answer != 'Y')
    {
        running = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "");

    while (running)
    {
        menuConvertion();
        selectConvertion();
        menuExit();
        system("cls");
    }
    printf("[SUCESS] Aplicacao encerrada com sucesso");
    return 0;
}
