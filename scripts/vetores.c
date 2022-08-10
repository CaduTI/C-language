#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    /*int naturais[20];
    float reais[15];*/
    char v[50];
    int j = 0;

    printf("Segue a relação de número e letra da tabela ASCII:\n");
    for(int i = 97; i <= 122; i++)
    {
        v[j] = i;
        j = j+1;
    }
    for(int i=0; i<26; i++)
    {
        
        printf("%d == %c\n", v[i], v[i]);
    }
    return 0;
}