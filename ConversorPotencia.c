/*

CONVERSOR DE UNIDADES DE POTÊNCIA

*/


#include <stdio.h>

void ConversorPotencia();
void WattsKilowatts(float watts);

int main(){
    
    ConversorPotencia();

    return 0;
}


void ConversorPotencia(){
    int opcao;

    float watts; 

    printf("\nQual conversao deseja realizar:\n");
    printf("\n1 - Watts (W) --> Quilowatts (kW)\n");
    printf("2 - Quilowatts (kW) -->  Watts (W)\n");
    printf("3 - Watts (W) -->  Cavalos-Vapor (Cv)\n");
    printf("4 - Quilowatts (kW) -->  Cavalos-Vapor (Cv)\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nInforme o valor em Watts: ");
            scanf("%f", &watts);
            WattsKilowatts(watts);
    }
}

// Funções de Conversões das Unidades

void WattsKilowatts(float watts){
    float conversao = watts / 1000;
    printf("%.2f Watts (W) equivale a %.2f Quilowatts (kW)\n", watts, conversao);
}