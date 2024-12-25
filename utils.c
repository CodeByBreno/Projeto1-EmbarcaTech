extern char lixo;
#include "utils.h"

void flushStdin()
{
    while ((getchar()) != '\n')
        ;
}

void pressToContinue()
{
    while ((getchar()) != '\n')
        ;
    printf("Digite algo para continuar...\n");
    scanf(" %c", &lixo);
}