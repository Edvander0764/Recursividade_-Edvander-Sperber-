#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char palavra[], int n);

int main()
{
  int tamanho;
  char palavra[100];

  printf("\nDigite uma palavra ou frase que tu desejas inverter: ");
  scanf(" %[^\n]s", palavra);

  tamanho = strlen(palavra);

  inverter(palavra,tamanho);

  return 0;
}

void inverter(char palavra[], int n)
{
    int nCont;
  
    if(n == 1)
    {        
        printf("\n%c\n\n",palavra[n-1]);
    }
    else 
    {
        printf("\n");

        if(n>1)
        {
            for(nCont = 0 ; nCont < n ; n--)
            {
               printf("%c",palavra[n-1]);
            }
        }

        printf("\n\n");
    }
}