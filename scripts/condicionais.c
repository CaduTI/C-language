#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* sintaxe básica das condições:
    if(condições){}
    elif(condições){}
    else{} - não possuí pois é caso seja diferenta das acima.
    */
   int idade;
   printf("digite sua idade por favor:\n");
   scanf("%i", &idade);
    /* condições agora*/
    printf("sua idade: %d", idade);
    if(idade > 18)
    {
        printf("Parabéns, você é maior de idade, se fodeu kkk\n");
    }else
    {
        printf("tu é menor de idade, criança fdp\n");
    }
    
    return 0;
}
