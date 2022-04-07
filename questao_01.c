#include <stdio.h>

int potencia(int base, int expoente);

int main()
{
    int base, expoente, resultado;

    printf("\nDigite a base deseja para o calculo de potencia ");
    scanf("%d", &base);
    printf("\nDigite o expoente desejado ");
    scanf("%d", &expoente);

    resultado = potencia(base,expoente);
    
    printf("\n%d elevado a %d = %d\n\n", base, expoente,resultado);

    return 0;
}

int potencia(int base, int expoente)
{
    if(expoente == 0)
    return 1;
    else
    return (base * potencia(base, expoente-1));
}