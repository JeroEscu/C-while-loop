/*
- Fecha de publicación: 2023-03-09
- Hora: 1:00 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa genera las siguientes ternas de enteros:
1 1 1
2 1 2
3 1 3
4 2 1
5 2 2
6 2 3
7 3 1
8 3 2
9 3 3
- Salvedad: El programa no admite el ingreso de datos
*/

#include <stdio.h>

int main()
{
    int columna1 = 1, columna2 = 1, columna3 = 1, contador = 1; //Se declaran las variables de tipo entero columna1, columna2 y columna3 para almacenar los valores de las columnas de la terna respectivamente, y la variable contador para contar el número de veces que se ha repetido la terna

    printf( "Ternas:\n");

    while( contador <= 9 ) //Se inicia un ciclo while que se ejecuta mientras contador sea menor o igual a 9 (numero de filas) e imprime las ternas
    {
        //Si la fila de la terna es multiplo de 3 se imprime la respectiva terna y se aumenta en 1 los valor de la columna1 y columna2 y se reinicia la columna3 a 1
        if( contador % 3 == 0 ){
            printf( "%i %i %i\n", columna1, columna2, columna3 );
            columna1++;
            columna2++;
            columna3 = 1;
        }//De lo contrario se imprime la respectiva terna y se aumenta en 1 los valor de la columna1 y columna3
        else{
            printf( "%i %i %i\n", columna1, columna2, columna3 );
            columna1++;
            columna3++;
        }//fin del if
        contador++;
    }//fin del while

    return 0;
}//fin main