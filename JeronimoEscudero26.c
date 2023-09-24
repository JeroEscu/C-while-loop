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
Z                 Z
 Z               Z
  Z             Z
   Z           Z
    Z         Z
     Z       Z
      Z     Z
       Z   Z
        Z Z
         Z
- Salvedad: El programa no admite el ingreso de datos
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

int main()
{
    int espaciosIniciales = 0, espaciosMedios = 17, fila = 1; //Se declaran las variables espaciosIniciales y espaciosMedios de tipo entero que almacenan la cantidad de espacios que se van a imprimir y fila que almacena el número de fila en la que se encuentra el programa

    while( fila <= 10 ) //Se inicia un ciclo while que se ejecutará mientras la variable fila sea menor o igual a 10 (numero de filas)
    {
        ImprimirEspacios( espaciosIniciales );
        ImprimirLetras( 1 );
        ImprimirEspacios( espaciosMedios );

        //Se verifica si fila es diferente de 10 para imprimir la segunda Z al final de cada linea
        if ( fila != 10 )
        {
            ImprimirLetras( 1 );
            printf( "\n" );
        }
        espaciosIniciales++;
        espaciosMedios -= 2;
        fila++;
    }//fin del while

    return 0;
}//fin main