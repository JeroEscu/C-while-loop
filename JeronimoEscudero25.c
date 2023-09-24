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
         Z
        ZZZ
       ZZZZZ
      ZZZZZZZ
       ZZZZZ
        ZZZ
         Z
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
        printf( "Z" );
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
    int fila = 1, cantidadDeEspacios = 9, cantidadDeLetras = 1; //Se declara las variables de tipo entero fila que funciona como contador de las filas que se van a imprimir, la variable cantidadDeEspacios que almacena la cantidad de cantidadDeEspacios que se van a imprimir y la variable cantidadDeLetras que almacena la cantidad de letras Z que se van a imprimir

    while( fila <= 4) //Se inicia un ciclo while que se ejecutará mientras la variable fila sea menor o igual a 4 (cuatro primeras filas)
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios--;
        cantidadDeLetras += 2;
    }//fin del while
    
    cantidadDeEspacios = 7, cantidadDeLetras = 5;

    while( fila <= 7 ) //Se inicia un ciclo while que se ejecutará mientras la variable fila sea mayor a 4 y menor o igual a 7
    {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }//fin del while

    return 0;
}//fin main