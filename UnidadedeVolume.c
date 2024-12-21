#include <stdio.h>

int main() {
    printf("Conversor de Valores de Volume\n");
    return 0;
}
int main() {
    int opcao;

    printf("Conversor de Valores de Volume\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Litros para Mililitros e Metros Cúbicos\n");
    printf("2 - Mililitros para Litros e Metros Cúbicos\n");
    printf("3 - Metros Cúbicos para Litros e Mililitros\n");
    printf("0 - Sair\n");

    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    printf("Opcao escolhida: %d\n", opcao);
    return 0;
}
