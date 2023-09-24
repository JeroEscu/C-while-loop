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

- El siguiente programa presenta la serie de Catalán (C(n) = (2n)! / (n!(n+1)!), donde C(0) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1;

    while( numero > 0 ){
        resultado *= numero;
        numero--;
    } //fin del while

    return resultado;
}

int main()
{
    int cantidadDeTerminos = 0, i = 1; //Se declaran las variables de tipo entero cantidadDeTerminos que almacena la cantidad de terminos que el usuario desea ver e i que funciona como contador
    long long int termino = 1; //Se declara la variable termino de tipo long long int y se le asigna el valor del termino n-esimo de la serie de Catalan para ser impreso
    
    printf( "El siguiente programa presenta la serie de Catalán: C(n) = (2n)! / (n!(n+1)!),\ndonde C(0) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos ); //se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i términos de la serie Catalán son: ", cantidadDeTerminos );
    
    while ( i <= cantidadDeTerminos ) //Se ejecuta el ciclo mientras el i sea menor o igual a la cantidad de terminos
    {
        printf( "%lld, ", termino );
        termino = ( Factorial( ( i * 2 ) ) / ( ( Factorial( i ) * Factorial( ( i + 1 ) ) ) ) );     
        i++;      
    }//fin del while

    return 0;
}//fin main