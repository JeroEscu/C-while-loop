/*
- Fecha de publicación: 2023-09-24
- Hora: 1:00 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa lee desde el teclado un grupo de 75 números, diferentes a cero e imprime: Cantidad de números Mayores a 150. Número mayor y número menor encontrado en el grupo. Cantidad de Números negativos encontrados. Promedio de los Positivos Encontrados.
- Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función VerificarResultados, que recibe como parámetros los contadores de cada requisito como apuntadores (esto porque lo que se debe modificar son los valores almacenados en dichos direcciones de memoria) y realiza el conteo de cada uno de ellos
int VerificarResultados( int numero, int *mayor, int *menor, int *negativos, int *positivos, float *sumaPositivos, int *mayores150 )
{   //Se verifica si el numero ingresado es mayor a 150, si es así se aumenta el contador de mayores150
    if( numero > 150 )
        (*mayores150)++;
    //Se verifica si el numero ingresado es mayor al numero mayor, si es así se cambia el valor de mayor por el numero ingresado
    if( numero > *mayor )
        *mayor = numero;
    //Se verifica si el numero ingresado es menor al numero menor, si es así se cambia el valor de menor por el numero ingresado
    if( numero < *menor )
        *menor = numero;
    //Se verifica si el numero ingresado es menor a cero, si es así se aumenta el contador de negativos
    if( numero < 0 )
        (*negativos)++;
    //Se verifica si el numero ingresado es mayor a cero, si es así se aumenta el contador de positivos y se suma el numero ingresado al contador de sumaPositivos
    if( numero > 0 ){
        (*positivos)++;
        (*sumaPositivos) += numero;
    }

    return 0;
}//fin VerificarResultados

//Se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   
    while( numero == 0 )//Se ejecuta el ciclo while que verifica si el numero es igual a 0
    {
        printf( "El número no puede ser cero.\nIngrese un número: " );
        scanf( "%i", &numero );//Se le asigna a la variable numero el valor ingresado por el usuario
    }//fin del while

    return numero;
    
}//fin ValidarNumero

int main()
{   
    printf( "Este programa lee desde el teclado un grupo de 75 números, diferentes a cero e imprime:\n* Cantidad de números Mayores a 150\n* Número mayor y número menor encontrado en el grupo\n* Cantidad de Números negativos encontrados\n* Promedio de los Positivos Encontrados.\n" );

    float sumaPositivos=0; //Se declara la variable sumaPositivos de tipo flotante para almacenar la suma de los números positivos ingresados
    int numero=0, numeroMayor=0, numeroMenor=__INT_MAX__, negativos=0, positivos=0, mayores150=0, contador=0;//Se declaran las variables contador para el while, numero, numeroMayor, numeroMenor, negativos, positivos, sumaPositivos y mayores150 de tipo entero para clasificar los numeros ingresados

    while( contador < 75 )
    {
        printf( "Ingrese un número: " );
        scanf( "%i", &numero );
        numero = ValidarNumero( numero );//Se llama a la función ValidarNumero para verificar si el numero es diferente de cero
        VerificarResultados( numero, &numeroMayor, &numeroMenor, &negativos, &positivos, &sumaPositivos, &mayores150 ); //Se llama a la función VerificarResultados dando como parametros los respectivos contadores (algunas con & porque se envían las direcciones de memoria de estas) para que realice el conteo de cada requisito

        contador++;
    }//fin del while

    printf( "\nCantidad de números mayores a 150: %i", mayores150 );
    printf( "\nNúmero mayor: %i", numeroMayor );
    printf( "\nNúmero menor: %i", numeroMenor );
    printf( "\nCantidad de números negativos: %i", negativos );
    printf( "\nPromedio de los números positivos: %g", ( sumaPositivos / positivos ) );
    
    return 0;
}//fin del main