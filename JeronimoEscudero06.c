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

- El siguiente programa presenta la serie de Padovan (P(n) = P(n-2) + P(n-3), donde P(0) = 1, P(1) = 0 y P(2) = 0.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int primerNumero = 1, segundoNumero = 0, tecerNumero = 0, auxiliar = 0, cantidadDeTerminos = 0; //Se declaran las variables de tipo entero primerNumero, segundoNumero y tecerNumero para almacenar el primer, segundo y tercer termino de la serie respectivamente (1, 0 y 0), auxiliar para almacenar la formula del n-esimo de la serie y cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver

    printf( "El siguiente programa presenta la serie de Padovan: P(n) = P(n-2) + P(n-3),\n donde P(0) = 1, P(1) = 0 y P(2) = 0." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i terminos de la serie de Padovan son: ", cantidadDeTerminos );

    while ( cantidadDeTerminos > 0 ) //Se ejecuta el ciclo mientras la cantidad de terminos sea mayor a 0
    {
        printf( "%i, ", primerNumero );
        auxiliar = segundoNumero + primerNumero;
        primerNumero = segundoNumero;
        segundoNumero = tecerNumero;
        tecerNumero = auxiliar;
        cantidadDeTerminos--;
    }//fin del while

    return 0;
}//fin main