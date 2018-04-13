#include <stdio.h>
#include "funciones.h"

float pedirFlotante(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);

    return numero;
}

float sumarFlotantes(char mensaje[], float numero1, float numero2)
{
    float suma = numero1 + numero2;
    printf("%s %.2f \n", mensaje, suma);
    return 0;
}

float restarFlotantes(char mensaje[], float numero1, float numero2)
{
    float resta = numero1 - numero2;
    printf("%s %.2f \n", mensaje, resta);
    return 0;
}

float dividirFlotantes(char mensaje[], float numero1, float numero2)
{
    if(numero2 == 0)
    {
        printf("%s No se puede calcular la division por cero \n", mensaje);
        return 0;
    }
    else
    {
        float division = numero1 / numero2;
        printf("%s %.2f \n", mensaje, division);
        return 0;
    }
}

float multiplicarFlotantes(char mensaje[], float numero1, float numero2)
{
    float division = numero1 * numero2;
    printf("%s %.2f \n", mensaje, division);
    return 0;
}

int factorialFlotantes(char mensaje[], float numero)
{
    int numeroEnt;
    int factorial=1;
    int i;

    numeroEnt = numero;
    if(numero - numeroEnt == 0 && numeroEnt>=0)
    {
        for(i=1;i<=numeroEnt;i++)
    {
        factorial = factorial * i;
    }
    printf("%s %d \n", mensaje, factorial);
    return 0;
    }
    else
    {
        printf("%s No se puede calcular con numeros flotantes \n", mensaje);
        return 0;
    }
}
