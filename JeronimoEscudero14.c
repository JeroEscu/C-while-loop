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

- El siguiente programa imprime las tablas de multiplicar del 1 al 10.
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

int main()
{
    int i = 1, j = 1; //Se declaran las variables i y j, i para el numero de la tabla y j para el numero por el que se va a multiplicar i

    printf( "Este programa imprime las tablas de multiplicar del 1 al 10." );

    while( i <= 10 ) //Se inicia un ciclo while que se ejecuta mientras i sea menor o igual a 10 
    {
        printf( "\nTabla del %i:\n", i );

        while( j <= 10 ) //Se inicia un ciclo while que se ejecuta mientras j sea menor o igual a 10 e imprime las tablas de multiplicar
        {
            printf( "%i x %i = %i\n", i, j, i * j );
            j++;
        }//fin del while

        i++;
        j = 1; 
    }//fin del while

    return 0;
}//fin del main