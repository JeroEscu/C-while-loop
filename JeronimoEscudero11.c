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

- El siguiente programa presenta la serie Triangular hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int primerNumero = 1, segundoNumero = 3, auxiliar = 0, cantidadDeTerminos = 0; //Se declaran las variables de tipo entero cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver, primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (1 y 3) y auxiliar para almacenar la formula del n-esimo de la serie

    printf( "Este programa presenta la serie de Triangular: T(n) = T(n-1) + (n-1)T(n-2),\ndonde T(0) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos ); //se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i terminos de la serie de Triangular son: ", cantidadDeTerminos );

    while( cantidadDeTerminos > 0 ) //Se ejecuta el ciclo mientras la cantidad de terminos sea mayor a 0
    {
        printf( "%i, ", primerNumero );
        auxiliar = ( segundoNumero - primerNumero ) + ( segundoNumero + 1 );
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
        cantidadDeTerminos--;
    } //fin del while
}//fin main