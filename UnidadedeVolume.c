#include <stdio.h>
void litrosParaOutros(double litros) {
    printf("\n%.2f litros equivalem a:\n", litros);
    printf("- %.2f mililitros\n", litros * 1000);
    printf("- %.6f metros cúbicos\n", litros / 1000);
}
void mililitrosParaOutros(double mililitros) {
    printf("\n%.2f mililitros equivalem a:\n", mililitros);
    printf("- %.2f litros\n", mililitros / 1000);
    printf("- %.9f metros cúbicos\n", mililitros / 1000000);
}