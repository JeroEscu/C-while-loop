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
                                                                               A
                                                                              AA
                                                                             AAA
                                                                            AAAA
                                                                           AAAAA
                                                                          AAAAAA
                                                                          ...
                                                    
- Salvedad: El programa no admite ingreso de datos
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
int ImprimirLetras( int cantidadDeLetras )
{
    while( cantidadDeLetras > 0 ){
        printf( "A" );
        cantidadDeLetras--;
    }
    return 0;
}//fin ImprimirLetras

int main()
{
    int fila = 1; //Se declara la variable de tipo entero fila que almacena el número de fila en la que se encuentra el programa

    while( fila <= 25 ) //Se inicia el ciclo while que se ejecutará mientras la variable fila sea menor o igual a 25 (numero de filas)
    {
        ImprimirEspacios( 80 - fila );
        ImprimirLetras( fila );
        printf( "\n" );
        fila++;
    }//fin del for

    return 0;
}//fin main