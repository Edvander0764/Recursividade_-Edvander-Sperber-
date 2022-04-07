#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char vetor[]);

int main()
{
    char palavra[50];

    printf("\nEntre com uma palavra: ");
    scanf(" %[^\n]s", palavra);

    inverter(palavra);
    printf("\n%s\n\n", palavra);

    return 0;
}

void inverter(char vetor[])
{
    int tamanho = strlen(vetor), nCont, troca, final;

    final = tamanho - 1;

    for (nCont = 0 ; nCont < tamanho/2 ; nCont++)
    {
        troca = vetor[nCont];
        vetor[nCont] = vetor[final];
        vetor[final] = troca;
        final--;
    }
}