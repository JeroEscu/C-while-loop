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

-  El siguiente programa imprime en pantalla el siguiente diseño:
PPPPPPPPPPPPP
 NNNNNNNNNNN
  LLLLLLLLL
   JJJJJJJ
    HHHHH
     FFF
      D  
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirEspacios con 1 parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de letras que se le indique
int ImprimirEspacios( int cantidadDeEspacios )
{
    while( cantidadDeEspacios > 0 ){
        printf( " " );
        cantidadDeEspacios--;
    }
}//fin ImpremirEspacios

//Se crea la función ImprimirLetras con 1 parámetros de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras, int ascii )
{
    while( cantidadDeLetras > 0 ){
        printf( "%c", ascii );
        cantidadDeLetras--;
    }
    return 0;
}//fin ImprimirLetras

int main()
{
    int cantidadDeLetras = 13, cantidadDeEspacios = 0, ascii = 80, fila = 1; //Se declaran las variables de tipo entero cantidadDeLetras y cantidadDeEspacios para almacenar la cantidad de letras y espacios que se imprimirán en cada fila respectivamente, la variable ascii de tipo entero para almacenar el valor ascii de la letra que se va a imprimir y fila de tipo entero para almacenar el número de fila en la que se encuentra el programa

    while( fila <= 7 )
     {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras, ascii );
        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
        ascii -=2 ;
        fila++;
    }//fin del while

    return 0;
}//fin main