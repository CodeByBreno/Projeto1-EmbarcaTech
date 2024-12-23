#include <stdio.h>
#include <stdlib.h>

#include "ConversorArea.c"

int running = 1;

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
    while (running)
    {
        ConversorArea();
        menuExit();
    }
    return 0;
}