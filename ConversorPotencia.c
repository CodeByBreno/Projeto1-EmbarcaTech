/*

CONVERSOR DE UNIDADES DE POTÊNCIA

*/

#include <stdio.h>

void ConversorPotencia();
void WattsKilowatts(float watts);
void KillowattsWatts(float kilowatts);
void WattsCv(float watts);
void KilowattsCv(float kilowatts);

int main(){
    
    ConversorPotencia();

    return 0;
}


void ConversorPotencia(){
    int opcao;

    float valor; 

    do{
        printf("\nQual conversao deseja realizar:\n");
        printf("\n1 - Watts (W) --> Quilowatts (kW)\n");
        printf("2 - Quilowatts (kW) -->  Watts (W)\n");
        printf("3 - Watts (W) -->  Cavalos-Vapor (Cv)\n");
        printf("4 - Quilowatts (kW) -->  Cavalos-Vapor (Cv)\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\nInforme o valor em Watts: ");
                scanf("%f", &valor);
                WattsKilowatts(valor);
                break;
            
            case 2:
                printf("\nInforme o valor em Kilowatss: ");
                scanf("%f", &valor);
                KillowattsWatts(valor);
                break;
            
            case 3: 
                printf("\nInforme o valor em Watts: ");
                scanf("%f", &valor);
                WattsCv(valor);
                break;
            
            case 4: 
                printf("\nInforme o valor em Kilowatts: ");
                scanf("%f", &valor);
                KilowattsCv(valor);
                break;

            default:
                printf("Entrada Invalida!. Por favor escolha uma das Conversoes Indicadas!\n");
                break;
        }
    } while (opcao < 1 || opcao > 4);
    
}

// Funções de Conversões das Unidades

void WattsKilowatts(float watts){
    float conversao = watts / 1000;
    printf("%.2f Watts (W) equivale a %.3f Quilowatts (kW)\n", watts, conversao);
}

void KillowattsWatts(float kilowatts){
    float conversao = kilowatts * 1000;
    printf("%.2f Quilowatts (Kw) equivale a %.3f Watss (W)\n", kilowatts, conversao);
}

void WattsCv(float watts){
    float conversao = watts / 735.5;
    printf("%.2f Watts (W) equivale a %.3f Cavalo-Vapor (Cv)\n", watts, conversao);
}

void KilowattsCv(float kilowatts){
    float conversao =  (kilowatts * 1000) / 735.5;
    printf("%.2f Kilowatts (Kw) equivale a %.3f Cavalo-Vapor (Cv)\n", kilowatts, conversao);

}