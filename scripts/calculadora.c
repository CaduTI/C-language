#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func_sum()
{
    setlocale(LC_ALL, "Portuguese");
    float a = 0,b = 0,sum;
    printf("Por favor, digite um número\n");
    scanf("%f",a);
    printf("\n");
    scanf("%f",b);
    sum = a + b;
    printf("%f",sum);
}
void func_sub()
{
    setlocale(LC_ALL, "Portuguese");
    float a = 0,b = 0,sub;
    printf("Por favor, digite um número\n");
    scanf("%f",a);
    printf("Por favor, digite um número:\n");
    scanf("%f",b);

    sub = a - b;
    printf("%f",sub);
}


void func_pow()
{
    setlocale(LC_ALL, "Portuguese");
    float p, pow;

    printf("Por favor, digite um número\n");
    scanf("%f",p);


    pow = p*p;
    printf("%f",pow);
}


void func_div()
{
    setlocale(LC_ALL, "Portuguese");
    float a,b, div;
    
    printf("Por favor, digite um número\n");
    scanf("%f",a);
    printf("Por favor, digite um número:\n");
    scanf("%f",b);

    div = a/b;
    printf("%f",div);
}

void func_mult()
{
    float a,b, mult;

    printf("Por favor, digite um número:\n");
    scanf("%f",a);
    printf("Por favor, digite um número:\n");
    scanf("%f",b);

    mult = a*b;

    printf("%f",mult);
}
int main()
{   char opcao;
    int v1, v2;
    setlocale(LC_ALL, "portuguese");
    printf("Por favor, escolha uma operação matemática:\n");
    printf("a- Soma:\n");
    printf("b - Subtração:\n");
    printf("c- Potência:\n");
    printf("d- Multiplicação:\n");
    printf("e- Divisão:\n");
    scanf("%c", &opcao);
    if (opcao =='a')
    {
        func_sum();
    }else if (opcao =='b')
    {
        func_sub();
    }else if (opcao == 'c')
    {
        func_pow();
    }else if (opcao == 'd')
    {
        func_mult();
    }else if (opcao == 'e')
    {
        func_div();
    }else
    {
        printf("Opção não válida, por favor, escolha uma opção válida");
    }
    
    system("pause");
    return 0;
}