#include <stdio.h>
void litrosParaOutros(double litros) {
    printf("\n%.2f litros equivalem a:\n", litros);
    printf("- %.2f mililitros\n", litros * 1000);
    printf("- %.6f metros cúbicos\n", litros / 1000);
}
