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

- El siguiente programa lee desde el teclado un número entero y lo imprime al revés.
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

int main(){

    int numero = 0; //Se declara la variable numero de tipo entero que almacena el valor ingresado por el usuario
    
    printf( "Este programa lee desde el teclado un número\nentero y lo imprime al revés.\nEntre el número: " );
    scanf( "%i", &numero ); //se le asigna a la variable numero el valor ingresado por el usuario

    while( numero > 0 ) //Se ejecuta el ciclo mientras numero sea mayor a 0
    {   
        printf( "%i", ( numero % 10 ) ); //Se imprime el ultimo digito de numero
        numero /= 10; //Se le asigna a la variable numero el valor sin su ultimo digito
    }//fin del while

    return 0;
}//fin main