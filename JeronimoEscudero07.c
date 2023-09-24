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

- El siguiente programa presenta la serie de Narayana (N(n) = N(n-1) + N(n-3), donde N(0) = 1, N(1) = 1 y N(2) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int primerNumero = 1, segundoNumero = 1, tercerNumero = 1, auxiliar = 0, cantidadDeTerminos = 0; //Se declaran las variables de tipo entero primerNumero, segundoNumero y tecerNumero para almacenar el primer, segundo y tercer termino de la serie respectivamente (1, 1 y 1), auxiliar para almacenar la formula del i-esimo de la serie y cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver

    printf( "Este programa presenta la serie de Narayana: N(n) = N(n-1) + N(n-3),\ndonde N(0) = 1, N(1) = 1 y N(2) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos ); //Se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i terminos de la serie de Narayana son: ", cantidadDeTerminos );

    while( cantidadDeTerminos > 0 ) //Se ejecuta el ciclo mientras la cantidad de terminos sea mayor a 0
    {
        printf( "%i, ", primerNumero );
        auxiliar = tercerNumero + primerNumero;
        primerNumero = segundoNumero;
        segundoNumero = tercerNumero;
        tercerNumero = auxiliar;
        cantidadDeTerminos--;
    } //fin del while
}//fin main