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

- El siguiente programa genera la suma de la serie de Taylor para cosh(x)
- Salvedad: El programa admite números enteros y de punto flotante, para valores fuera de este rango no garantizamos su resultado
*/

#include <stdio.h>
#include <math.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1; //Se declara la variable resultado de tipo entero largo que almacena el resultado del factorial

    while( numero > 0 ){
        resultado *= numero;
        numero--;
    } //fin del while

    return resultado;
}//fin Factorial

int main()
{
    float x = 0.0, cosh = 0.0; //Se declara la variable x de tipo flotante que almacena el valor ingresado por el usuario y la variable cosh de tipo flotante que almacena el resultado de la sumatoria
    int n = 0; //Se declara la variable n de tipo entero que almacena el número de términos de la sumatoria

    printf( "Este programa genera la suma de la serie de Taylor para cosh(x)\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario

    n--; //Se le resta 1 a la variable n porque la serie de Taylor empieza en 0

    while( n >= 0 )
    {
        cosh += ( pow( x, ( 2 * n ) ) ) / Factorial( 2 * n ); 
        n--;
    }
    
    printf( "El valor de cosh(%f) es igual a: %f", x, cosh );
    
    return 0;
}//fin main