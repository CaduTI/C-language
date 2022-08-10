#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2;
    i = ~i;
    printf("Valor com NOT vale :%d\n", i);
    i = 2;
    i = i <<2;
    printf("Valor com deslocamento de bits à esquerda vale :%d\n", i);
    i = 2;
    i = i>> 1;
    printf("Valor com deslocamento de bits à direita vale :%d\n", i);
    return 0;
}