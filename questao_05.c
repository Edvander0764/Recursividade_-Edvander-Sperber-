#include<stdio.h>

int exponent(int a, int b, int expo);

int main()
{
    int num1, num2, expoente, resultado;

    printf("\n>>>Para a^n * b^n<<<\n");        

    printf("\nDigite o valor de 'a': ");
    scanf("%d", &num1);
    printf("\nDigite 'b': ");
    scanf("%d", &num2);
    printf("\nDigite o expoente 'n' desejado: ");
    scanf("%d", &expoente);

    resultado = exponent(num1, num2, expoente);

    printf("\nO resultado de (%d^%d)*(%d^%d) e: %d\n\n", num1, expoente, num2, expoente, resultado);
    
    return 0; 
}

int exponent(int a, int b, int expo)
{
    if(expo==0)
    {
        return 1;
    }
    else
    {
        return a * b * exponent(a , b, expo - 1);
    }
}