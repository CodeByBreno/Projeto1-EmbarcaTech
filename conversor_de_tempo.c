#include <stdio.h>

// Função para converter segundos em minutos e horas
void converterTempo(int segundos) {
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = segundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, seg);
}

int main() {
    int segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    converterTempo(segundos);

    return 0;
}
