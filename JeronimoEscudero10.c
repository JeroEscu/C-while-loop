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

- El siguiente programa presenta la serie de Motzkin (M(n) = (3(n-1) * M(n-2) + (2n + 1) * M(n-1) ) / n + 2, donde M(0) =1 y M(1) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main()
{
    int primerNumero = 1, segundoNumero = 1, auxiliar = 0, cantidadDeTerminos = 0; //Se declaran las variables de tipo entero primerNumero y segundoNumero para almacenar el primer y segundo termino de la serie respectivamente (1 y 1), auxiliar para almacenar la formula del n-esimo de la serie y cantidadDeTerminos para almacenar la cantidad de terminos que el usuario desea ver

    printf( "El siguiente programa presenta la serie de Motzkin: M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k),\ndonde M(0) = 1 y M(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i de la serie de Motzkin son: ", cantidadDeTerminos );

    int i = 2; //Se declara la variable i para el ciclo while, se inicializa en 2 ya que los primeros terminos ( 0 y 1 ) no se debenn iterar

    while ( i <= cantidadDeTerminos+1 ) //Se ejecuta el ciclo mientras el contador sea menor o igual a la cantidad de terminos + 1
    {
        printf( "%i, ", primerNumero );
        auxiliar = ( ( ( ( 2 * i + 1 ) * segundoNumero ) + ( ( 3 * i - 3 ) * primerNumero ) ) / ( i + 2 ) );
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
        i++;
    }//fin del while

    return 0;
}//fin main