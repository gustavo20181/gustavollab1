#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 3


int main()
{
    int i;
    int numeroUsuario;
    int acumulador = 0;
    float resultado;
    float maximo;


    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        printf("Dame el Numero %d\n",i+1);
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;

        if (numeroUsuario>maximo)
        {
            maximo=numeroUsuario;
        }
    }
    resultado = (float)acumulador / CANTIDAD_NUMEROS;
    printf("Resultado %.2f\n",resultado);
    printf("Maximo %.2f\n" , maximo);

    return 0;
}










