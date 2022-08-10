#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    char nome[60];
    printf("Qual o seu nome?\n");
    gets(nome);
    printf("Por favor %s, selecione uma das opções bancárias:\n");
    printf("a-Saque conta corrente\n");
    printf("b- Saque conta poupança\n");
    printf("c- Depósito\n");
    scanf("%c", &opcao);
    if (opcao == 'a'){
        printf("%s,o valor foi sacado de sua conta corrente...",nome);
    }else if (opcao =='b')
    {
        printf("%s,o valor foi sacado de sua conta poupança...",nome);
    }else if (opcao =='c')
    {
        printf("%s, o valor foi depositado em sua conta...",nome);
    }else{
        printf("Por favor, informe uma opção válida");
    }
    return 0;
}
