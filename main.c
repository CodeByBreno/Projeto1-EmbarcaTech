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
    printf("1. Unidades de comprimento (metro, centímetro, milímetro)\n");
    printf("2. Unidades de massa (quilograma, grama, tonelada)\n");
    printf("3. Unidades de volume (litro, mililitro, metros cúbicos)\n");
    printf("4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)\n");
    printf("5. Unidades de velocidade (km/h, m/s, mph)\n");
    printf("6. Unidades de potencia Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
    printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n");

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
    default:
        printf("Opção inválida!\n");
        break;
    }
}

void menuExit()
{
    char answer;
    printf("\nDeseja realizar outra conversão? [Y/n]\n");
    scanf(" %c", &answer);
    if (answer != 'Y')
    {
        running = 0;
    }
    else
    {
        system("cls");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    while (running)
    {
        menuConvertion();
        selectConvertion();
        menuExit();
    }
    printf("[SUCESS] Aplicação encerrada com sucesso");
    return 0;
}