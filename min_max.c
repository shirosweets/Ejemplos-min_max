#include <stdio.h>
#include <assert.h>
/*Hacer un programa en un archivo nuevo min_max.c,
que calcula el
mınimo y el maximo de un arreglo 
no vacıo. La funcion tiene el siguiente tipo:*/
//struct datos_t min_max(int a[], int tam)
//donde la estructura datos_t se define como sigue:/
/* La declaracion de los struct terminan con llave*/
struct datos_t {
int maximo;
int minimo;
};
int main (){
	printf ("*** Programa min_max (Proyecto 4, Ejercicio 11) ***");
	int N;
    struct datos_t min_max(int a[], int tam);
	printf ("\n Ingrese el valor del arreglo: ");
	scanf ("%d", &N); // Ingreso por teclado el valor del arreglo
	assert (N>0); // Si se ingresa un valor del arreglo inválido finaliza el programa
	maximo= 2;
	minimo= 0;
	printf ("\n El minimo es: %d", minimo);
	printf ("\n El máximo es: %d", maximo);
    printf ("*** FIN Programa min_max (Proyecto 4, Ejercicio 11) ***");
	return 0;
}
/* La funcion pedida debe implementarse con un 
unico ciclo. En la funcion main pedir al usuario
los datos del arreglo e imprimir en pantalla el 
maximo y el mınimo devuelto por la funcion.*/
