#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#include "utils.h"

#include "utils.c"
#include "ConversorComprimento.c"
#include "ConversorMassa.c"
#include "ConversorVolume.c"
#include "ConversorTemperatura.c"
#include "ConversorVelocidade.c"
#include "ConversorPotencia.c"
#include "ConversorArea.c"
#include "ConversorTempo.c"

int running = 1;
int convertionOption = 0;
char lixo;

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
    system("cls");
}

void selectConvertion()
{
    switch (convertionOption)
    {
    case 1:
        conversorComprimento();
        break;
    case 2:
        conversorMassa();
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
        conversorTempo();
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
    system("cls");
}

void menuExit()
{
    char answer;
    while ((getchar()) != '\n')
        ;
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