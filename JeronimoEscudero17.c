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

- El siguiente programa genera las siguientes parejas de enteros:
0 1
1 1
2 2
3 2
4 3
5 3
6 4
7 4
8 5
9 5
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

int main()
{
    printf( "Parejas de enteros: \n" );
    int columna1 = 0, columna2 = 1, contador = 1; //Se declaran las variables de tipo entero columna1 y columna2 que almacenan los valores de las columnas 1 y 2 respectivamente, y la variable contador que almacena el número de veces que se ha repetido el numero en la columna 2

    while( columna1 <= 9 ) //Se inicia el ciclo while que se ejecuta mientras columna1 sea menor o igual a 9 e imprime las parejas de enteros
    {
        if ( contador < 2 ){ 
            printf( "%i %i\n", columna1, columna2 );
            columna1++;
            contador++;
        }//de lo contrario
        else{
            printf( "%i %i\n", columna1, columna2 );
            columna1++;
            columna2++;
            contador--;
        }//fin del if 
    }//fin del while

    return 0;
}//fin main