/* 
- Fecha de publicación: 2023-09-24
- Hora: 1:00 p.m

- Versión de su código: 1.1
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa presenta la serie de Bell sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado, ademas se realizó un cambio en la formula mostrada en el contrato, en su lugar se utilizo la siguiente formula: B(termino de la serie) = 1/e * sumatoria desde k=0 de k^n / k! ( entre el numero final de la sumatoria sea mayor, mas aproximado estara el termino resultante)
*/

#include <stdio.h>
#include <math.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
float Factorial( int numero )
{
    float resultado = 1;

    while( numero > 0 ){
        resultado *= numero;
        numero--;
    } //fin del while

    return resultado;
}//fin Factorial

//Se crea la función Sumatoria con 3 parámetros de tipo entero (k, n, limite) que calcula la sumatoria de la serie de Bell
float Sumatoria( int k, int n, int limite )
{
    float resultado = 0;//Se declara la variable resultado de tipo flotante que almacena el resultado de la sumatoria

    while( k <= limite ){
        resultado += ( pow( k, n ) / Factorial( k ) );
        k++;
    }//fin del while

    //se multiplica el resultado de la sumatoria por 1/e para obtener el termino de la serie
    return ( resultado * ( 1 / 2.718281828459045235 ) );
}//fin Sumatoria

int main()
{
    int cantidadDeTerminos = 0; //Se declara la variable cantidadDeTerminos de tipo entero que almacena la cantidad de terminos que el usuario desea ver
    
    printf( "El siguiente programa presenta la serie de Bell: B(n) = 1/e * Σ(k=0, ∞) (k^n/k!),\ndonde B(0) = 1 y B(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Bell son: ", cantidadDeTerminos );
    
    int contador = 0; //Se declara la variable contador de tipo entero que funciona como contador
    
    while ( contador < cantidadDeTerminos ) //Se ejecuta el ciclo mientras el contador sea menor a la cantidad de terminos
    {
        printf( "%.0lf, ", round( Sumatoria( 0, contador, 100 ) ) ); //Se usa el formato %g para que el resultado sea redondeado y no se imprima con valores decimales
        contador++;
    }//fin del while

    return 0;
}//fin main