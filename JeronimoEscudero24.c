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
                           A     A
                           AA   AA
                           AAA AAA
                           AAAAAAA
                           AAA AAA
                           AA   AA
                           A     A
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

//Se crea la funcion salto de linea que imprime un salto de linea
int SaltoDeLinea()
{
    printf( "\n" );
    return 0;
}//fin SaltoDeLinea

int  main()
{
    int fila = 1, espaciosMedios = 5, cantidadA = 3; //Se declaran las variables fila, espaciosMedios y cantidadA de tipo entero que almacenan la cantidad de filas, la cantidad de espacios medios y la cantidad de letras A que se desean imprimir respectivamente

    while( fila <= 3 ){
        ImprimirEspacios( 27 );
        ImprimirLetras( fila );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( fila );
        SaltoDeLinea();
        fila++;
        espaciosMedios-=2;
    }//fin del while

    //cuando fila = 4
    ImprimirEspacios( 27 );
    ImprimirLetras( 7 );
    SaltoDeLinea();
    fila++;

    //Para las 3 ultimas filas
    espaciosMedios = 1;//se le da a la variable espaciosMedios un 1 para iniciar desde la fila 5
    
    while( fila <= 7 ){
        ImprimirEspacios( 27 );
        ImprimirLetras( cantidadA );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( cantidadA );
        SaltoDeLinea();
        fila++;
        cantidadA--;
        espaciosMedios+=2;
    }//fin del while

    return 0;
}//fin main