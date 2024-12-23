#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#include "ConversorComprimento.c"
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
    printf("6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
    printf("7. Unidades de área (metro quadrado, centímetro quadrado)\n");

    scanf("%d", &convertionOption);
}

void menuExit()
{
    char answer;
    printf("Deseja realizar outra conversão? [Y/n]\n");
    scanf(" %c", &answer);
    if (answer != "Y")
    {
        running = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    while (running)
    {
        menuConvertion();
        switch (convertionOption)
        {
        case 1:
            conversorComprimento();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            conversorArea();
            break;
        default:
            break;
        }
        menuExit();
    }
    return 0;
}