#include <stdio.h>

int fibonacci(int num);

int main()
{
    int numero=10, nCont;

    for(nCont=0; nCont<numero; nCont++)
    {
       printf("%d ", fibonacci(nCont+1));
    }
}

int fibonacci(int num)
{
    if(num==1)
    {
       return 1;
    }
    if (num==2)
    {
       return 1;
    }
    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
       
}