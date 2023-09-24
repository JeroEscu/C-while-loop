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

- El siguiente programa presenta la serie de Lucas L(n) = L(n-1) + L(n-2), donde L(0) = 2 y L(1) = 1. hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int primerNumero = 2, segundoNumero = 1, auxiliar = 0, cantidadDeTerminos = 0; //Se declaran las variables de tipo entero cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver, primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (2 y 1), y auxiliar para almacenar la formula del i-esimo de la serie

    printf( "Este programa presenta la serie de Lucas: L(n) = L(n-1) + L(n-2),\ndonde L(0) = 2 y L(1) = 1" );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos ); //Se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i terminos de la serie de Lucas son: ", cantidadDeTerminos );

    while( cantidadDeTerminos > 0 ) //Se ejecuta el ciclo mientras la cantidad de terminos sea mayor a 0
    {
        printf( "%i ", primerNumero );
        auxiliar = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
        cantidadDeTerminos--;
    } //fin del while
    return 0;
}//fin main