
/***************
*
*Alumno: Lautaro Santiago Subeldia
*
*https://github.com/LautaroSantiago
*
*\brief Calculadora: para ello el programa iniciará y contará con un menú de opciones
*
*
****************/

#include <stdio.h>
#include <stdlib.h>
#include "Trabajo Practico numero1.h"

/***************
*
*\brief Funcion utilizada para comenzar programa
*\param Resive la opcion elejida por el usuario
*\param Determina opcion segun indique el usuario
*\param Ingresa numeros segun coloque el usuario
*\return Resive la opcion elejida por el usuario, si es correcta procedera a pedir datos y si no lo es mostrara un ERROR
*
***************/

int main()
{
    int numeroA = 0;
    int numeroB = 0;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDividir;
    int resultadoMultiplicar;
    int factorearA;
    int factorearB;
    int opcion;
    char salir;
    int flag = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4 = 0;

    do
    {

        MostrarMenu(resultadoSuma, resultadoResta, resultadoDividir, resultadoMultiplicar, factorearA, factorearB,numeroA , numeroB, flag4);

        printf("Coloque la opcion\n");
        fflush(stdin);
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                flag = 1;
                printf("Coloque el Primer numero\n");
                fflush(stdin);
                scanf("%d", &numeroA);
                flag4 = 1;
                break;
            case 2:
                flag2 = 1;
                printf("Coloque el Segundo numero\n");
                scanf("%d", &numeroB);
                flag4 = 1;
                break;
            case 3:
                if (flag == 1 && flag2 == 1)
                {
                    calculos(&resultadoSuma, &resultadoResta, &resultadoDividir, &resultadoMultiplicar, &factorearA, &factorearB, numeroA, numeroB);
                    flag3 = 1;
                    printf("Operaciones realizadas\n");
                }
                else
                {
                    printf("ERROR, Ingrese los operandos\n\n");
                }
                    break;
            case 4:
                if (flag3 == 1)
                {
                    flag4 = 2;
                    printf("Oprima una tecla para mostrar resultados...\n\n");
                }
                else
                {
                    printf("ERROR, Ingrese los operandos y realice las operaciones\n\n");
                }
                break;
            case 5:
                printf("Seguro quiere salir?\n");
                fflush(stdin);
                scanf("%c", &salir);
                break;
            default:
                printf("OPCION INVALIDA\n\n");
        }
        system("pause");
    }
    while(salir != 's');

    return 0;

}
