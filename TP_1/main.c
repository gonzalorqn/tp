#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1;
    float num2;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: num1 = pedirFlotante("Ingrese un numero: ");
                break;
            case 2: num2 = pedirFlotante("Ingrese un numero: ");
                break;
            case 3: sumarFlotantes("La suma es: ", num1, num2);
                break;
            case 4: restarFlotantes("La resta es: ", num1, num2);
                break;
            case 5: dividirFlotantes("La division es: ", num1, num2);
                break;
            case 6: multiplicarFlotantes("La multiplicacion es: ", num1, num2);
                break;
            case 7: factorialFlotantes("El factorial es: ", num1);
                break;
            case 8: sumarFlotantes("1- La suma es: ", num1, num2);
                    restarFlotantes("2- La resta es: ", num1, num2);
                    dividirFlotantes("3- La division es: ", num1, num2);
                    multiplicarFlotantes("4- La multiplicacion es: ", num1, num2);
                    factorialFlotantes("5- El factorial es: ", num1);
                break;
            case 9: seguir = 'n';
                break;
        }
        }

    return 0;
}
