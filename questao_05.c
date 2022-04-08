#include <stdio.h>
#include <stdlib.h>

int expression (int repet);

int main()
{
    int n; 

    printf("\nEntre com um valor 'n' com no máximo 2 algarismos: ");
    scanf("%d", &n);

    expression(n);

    return 0;
}

int expression (int repeat)
{
    printf("\n");
    int num = repeat;
    if (num == 0)
    {
       return printf("Essa expressão é igual a 1\n\n");
    }
    else
    {
        int aCont, bCont;

        for (aCont = 0 ; aCont < num ; aCont++)
        {
            printf("a");
        }
        for (bCont = 0 ; bCont < num ; bCont++)
        {
            printf("b");
        }
    }
    printf("\n\n");
}