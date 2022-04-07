#include <stdio.h>
#include <stdlib.h>

int MDC (int primeiro, int segundo);

int main()
{
    int numA, numB;

    printf("Entre com um numero que será chamado de A: ");
    scanf("%d", &numA);
    printf("Entre com um numero que será chamado de B: ");
    scanf("%d", &numB);

    int MDC (numA, numB);

    printf("\nO MDC entre A e B e: %d\n\n", MDC(numA, numB));

    return 0;
}

int MDC (int primeiro, int segundo)
{
    if (primeiro == 0)
    {
        return segundo;
    }
    else
    {
       if (segundo == 0)
        {
           return primeiro;
        }
        else
        {
            return MDC(segundo, primeiro % segundo);
        }
    }
}