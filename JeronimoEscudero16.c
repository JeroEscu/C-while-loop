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

- El siguiente programa lee un número entero positivo e imprime la suma de todos los factoriales desde 0 hasta el número ingresado
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1; //Se declara la variable de tipo entero resultado que almacena el resultado del factorial del número ingresado por el usuario

    while( numero > 0 ){
        resultado *= numero;
        numero--;
    }

    return resultado;
}//fin Factorial

//Se crea la función ValidarNumero con un parámetro de tipo entero (numero) que verifica si el número es entero positivo
int ValidarNumero( int numero )
{   //se verifica si el numero es entero positivo
    while( numero < 0 )
    {
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
    }//fin del while

    return numero;
}//fin ValidarNumero

int main()
{
    int numero = 0, sumaFactorial = 0, n = 0; //Se declaran las variables de tipo entero numero y sumaFactorial que almacena el número ingresado por el usuario para calcular su factorial y la suma hasta este y n que almacena el número de iteraciones del ciclo while

    printf( "El siguiente programa lee un número entero, no negativo y muestra la suma de los\nfactoriales de todos los números desde 0 hasta el numero ingresado.\nIngrese por favor el numero: " );
    scanf( "%i", &numero ); //Se le asigna a la variable numero el valor ingresado por el usuario

    numero = ValidarNumero( numero ); //Se le asigna a la variable numero el valor retornado por la función ValidarNumero

    while( n < numero ) //Se inicia un ciclo while que se ejecuta mientras n sea menor que el número ingresado por el usuario para sumar los factoriales desde 0 hasta el número ingresado
    {
        printf( "%i + ", Factorial( n ) );
        sumaFactorial += Factorial( n );
        n++;
    }//fin del while

    printf( "%i = %i", Factorial( numero ), ( sumaFactorial + Factorial( numero ) ) ); //Se imprime el ultimo factorial y la suma total de los factoriales

    return 0;
}//fin main