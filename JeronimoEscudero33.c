/*
- Fecha de publicación: 2023-03-09
- Hora: 2:30 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa genera la suma de la serie de Taylor para ln(x)
- Salvedad: El programa admite números enteros y de punto flotante, para valores fuera de este rango no garantizamos su resultado
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x = 0.0, ln = 0.0; //Se declara la variable x de tipo flotante que almacena el valor ingresado por el usuario y la variable ln de tipo flotante que almacena el resultado de la sumatoria
    int n = 0; //Se declara la variable n de tipo entero que almacena el número de términos de la sumatoria

    printf( "Este programa genera la suma de la serie de Taylor para ln(x)\nIngrese el valor de x: " );
    scanf( "%f", &x ); //Se le asigna a la variable x el valor ingresado por el usuario
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n ); //Se le asigna a la variable n el valor ingresado por el usuario
    
    n--; //Se le resta 1 a la variable n porque la serie de Taylor empieza en 0

    while( n >= 0 )
    {
        ln += ( pow( (-1), n ) * ( pow( ( x - 1 ), ( n + 1 ) ) / ( n + 1 ) ) ); 
        n--;
    }
    
    printf( "El valor de ln(%f) es igual a: %f", x, ln );
    
    return 0;
}//fin main