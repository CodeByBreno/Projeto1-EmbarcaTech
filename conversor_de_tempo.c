#include <stdio.h>

// Função para converter segundos em minutos e horas
void converterTempo(int segundos) {
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = segundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, seg);
}

// Função para converter horas em minutos
int converterHorasParaMinutos(int horas) {
    return horas * 60;
}

// Função para converter minutos em segundos
int converterMinutosParaSegundos(int minutos) {
    return minutos * 60;
}

int main() {
    int segundos, horas, minutos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    converterTempo(segundos);

    printf("Digite o tempo em horas: ");
    scanf("%d", &horas);
    minutos = converterHorasParaMinutos(horas);
    printf("%d horas equivalem a %d minutos.\n", horas, minutos);

    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    segundos = converterMinutosParaSegundos(minutos);
    printf("%d minutos equivalem a %d segundos.\n", minutos, segundos);

    return 0;
}

