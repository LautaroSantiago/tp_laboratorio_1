#include <stdio.h>
#include <stdlib.h>
#include "Trabajo Practico numero1.h"

/***************
*
*\brief Funcion que resive dos numeros y calcula operacion de suma
*
*\param Calcula operacion de suma
*\return Entrega suma
*
***************/

int sumar(int numeroA,int numeroB)
{
    return (numeroA + numeroB);
}

/***************
*
*\brief Funcion que resive dos numeros y calcula operacion de resta
*
*\param Calcula operacion de resta
*\return Entrega resta
*
***************/

int restar(int numeroA,int numeroB)
{
    return (numeroA - numeroB);
}

/***************
*
*\brief Funcion que resive dos numeros y calcula operacion de division, si es que realiza una
* operacion invalida mostrara un ERROR
*
*\param Calcula operacion de division e informa ERROR si el segundo numero es igual a cero
*\return Entrega division
*
***************/

float dividir(int numeroA,int numeroB)
{
    float resultado;

    if (numeroB != 0)
    {
        resultado = (((float) numeroA / (float) numeroB));

        return resultado;
    }
    else
    {
        printf("ERROR, al dividir por cero\n");
    }

    return 0;
}

/***************
*
*\brief Funcion que resive dos numeros y calcula operacion de multiplicacion
*
*\param Calcula operacion de multiplicacion
*\return Entrega multiplicacion
*
***************/

int multiplicar(int numeroA,int numeroB)
{
    return (numeroA * numeroB);
}

/***************
*
*\brief Funcion que resive un numero y calcula operacion de factoreo
*
*\param Calcula operacion de factoreo
*\return Entrega factoreo
*
***************/

int factorear(int numero)
{
    int i;
    int resultado;

    resultado = 1;

    for(i = numero; i >= 1; i--)
    {
        resultado *= i;
    }

    return resultado;
}

/***************
*
*\brief Funcion que realiza punteros para cada operacion
*
*\param Resive los valores de las operaciones de cada funcion
*\return Entrega los valores de las operaciones de cada funcion
*
***************/

void calculos(int* suma, int* resta,float* dividiendo, int* multiplicando, int* factorA, int* factorB, int numeroA, int numeroB)
{
    *suma = sumar(numeroA, numeroB);
    *resta = restar(numeroA, numeroB);
    *dividiendo = dividir(numeroA, numeroB);
    *multiplicando = multiplicar(numeroA, numeroB);
    *factorA = factorear(numeroA);
    *factorB = factorear(numeroB);
}

/***************
*
*\brief Funcion que muesta el menu
*
*\param Resive los resultados segun opcion indicada, mostrando el menu completo con los datos si es que
* ingreso ambos numeros, de lo contrario avisara de la ausencia de algun dato
*\return Muestra los resultados segun opcion indicada
*
***************/

void MostrarMenu(int Rsuma, int Rresta,float Rdividiendo, int Rmultiplicando, int RfactorA, int RfactorB, int RnumeroA, int RnumeroB, int x)
{
    if (x == 0)
    {

        system("cls");
        printf("1. Ingresar 1er operando (A = %d)\n", RnumeroA);
        printf("2. Ingresar 2do operando (B = %d)\n", RnumeroB);
        printf("3. Calcular todas las operaciones\n");
        printf("    a) Calcular la suma (A + B)\n");
        printf("    b) Calcular la resta (A - B)\n");
        printf("    c) Calcular la division (A / B)\n");
        printf("    d) Calcular la multiplicacion (A * B)\n");
        printf("    e) Calcular el factorial (A!)\n");
        printf("4. Informar resultados\n");
        printf("    a) El resultado de A + B es: r \n");
        printf("    b) El resultado de A - B es: r \n");
        printf("    c) El resultado de A / B es: r \n");
        printf("    d) El resultado de A * B es: r \n");
        printf("    e) El factorial de A es: r y El factorial de B es: r \n");
        printf("5. Salir\n");
    }
    else if (x == 1)
    {

        system("cls");
        printf("1. Ingresar 1er operando (A = %d)\n", RnumeroA);
        printf("2. Ingresar 2do operando (B = %d)\n", RnumeroB);
        printf("3. Calcular todas las operaciones\n");
        printf("    a) Calcular la suma (%d + %d)\n", RnumeroA, RnumeroB);
        printf("    b) Calcular la resta (%d - %d)\n", RnumeroA, RnumeroB);
        printf("    c) Calcular la division (%d / %d)\n", RnumeroA, RnumeroB);
        printf("    d) Calcular la multiplicacion (%d * %d)\n", RnumeroA, RnumeroB);
        printf("    e) Calcular el factorial (%d!) y de (%d!) \n", RnumeroA, RnumeroB);
        printf("4. Informar resultados\n");
        printf("    a) El resultado de %d + %d es: r \n", RnumeroA, RnumeroB);
        printf("    b) El resultado de %d - %d es: r \n", RnumeroA, RnumeroB);
        printf("    c) El resultado de %d / %d es: r \n", RnumeroA, RnumeroB);
        printf("    d) El resultado de %d * %d es: r \n", RnumeroA, RnumeroB);
        printf("    e) El factorial de %d es: r y El factorial de %d es: r \n", RnumeroA, RnumeroB);
        printf("5. Salir\n");
    }
    else if (x == 2)
    {

        system("cls");
        printf("1. Ingresar 1er operando (A = %d)\n", RnumeroA);
        printf("2. Ingresar 2do operando (B = %d)\n", RnumeroB);
        printf("3. Calcular todas las operaciones\n");
        printf("    a) Calcular la suma (%d + %d)\n", RnumeroA, RnumeroB);
        printf("    b) Calcular la resta (%d - %d)\n", RnumeroA, RnumeroB);
        printf("    c) Calcular la division (%d / %d)\n", RnumeroA, RnumeroB);
        printf("    d) Calcular la multiplicacion (%d * %d)\n", RnumeroA, RnumeroB);
        printf("    e) Calcular el factorial (%d!) y de (%d!) \n", RnumeroA, RnumeroB);
        printf("4. Informar resultados\n");
        printf("    a) El resultado de %d + %d es: %d \n", RnumeroA, RnumeroB, Rsuma);
        printf("    b) El resultado de %d - %d es: %d \n", RnumeroA, RnumeroB, Rresta);
        if (RnumeroB != 0)
        {
            printf("    c) El resultado de %d / %d es: %.2f \n", RnumeroA, RnumeroB, Rdividiendo);
        }
        else
        {
            printf("    c) El resultado de %d / %d es: ERROR, no se puede dividir por cero\n\n", RnumeroA, RnumeroB);
        }
        printf("    d) El resultado de %d * %d es: %d \n", RnumeroA, RnumeroB, Rmultiplicando);
        printf("    e) El factorial de %d es: %d y El factorial de %d es: %d \n", RnumeroA, RfactorA, RnumeroB, RfactorB);
        printf("5. Salir\n");
    }
}

