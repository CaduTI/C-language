#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void functeste()
{
    printf("sou uma função teste, apenas isso e nada mais :D");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    functeste();
    return 0;
}