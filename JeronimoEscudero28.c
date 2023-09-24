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
                                   AAAAA
                                    AAAA
                                     AAA
                                      AA
                                       A
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
int ImprimirLetras( int cantidadDeLetras )
{
    while( cantidadDeLetras > 0 ){
        printf( "A" );
        cantidadDeLetras--;
    }
    return 0;
}//fin ImprimirLetras

//Se crea la funcion salto de linea que imprime un salto de linea
int SaltoDeLinea()
{
    printf( "\n" );
    return 0;
}//fin SaltoDeLinea

int main()
{
    int fila = 1, cantidadDeEspacios = 39; //Se declaran las variables fila y cantidadDeEspacios de tipo entero que almacenan la cantidad de filas y la cantidad de cantidadDeEspacios que se van a imprimir respectivamente

    while( fila <= 6 ) //Se inicia el ciclo while que se ejecutará mientras la variable fila sea menor o igual a 6 (primeras filas del diseño)
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( fila );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios--;
    }//fin del while

    //Para las ultimas 5 filas
    cantidadDeEspacios = 35;
    int cantidadDeLetras = 5; //Se declara la variable cantidadDeLetras de tipo entero que almacena la cantidad de letras que se van a imprimir en cada fila
    
    while ( fila <= 11 ) //Se inicia el ciclo while que se ejecutará mientras la variable fila sea menor o igual a 11 (ultimas filas del diseño)
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios++;
        cantidadDeLetras--;
    }//fin del while

    return 0;
}//fin main