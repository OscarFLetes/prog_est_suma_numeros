/*Autor: Oscar Eduardo FLetes Ixta, elavorado el 18/02/222
	Programa que calcula e imprime los primeros 50 numeros enteros
	
	Programa en lenguaje c que calcula la suma de 50 numeros enteros, con el uso de scanf, uso del ciclo while y opreaciones 
	aritmeticas.
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada	
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo int
		* Uso de scanf
		* Uso del ciclo while	
		* Operaciones aritemticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo int, uso del scanf, uso del ciclo while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo int (valor del numero entero)
	El programa calcula la suma e imprime los primeros 50 numeros enteros
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables 
	int numero, suma=0, i=0;//Variables enteras
	//Entrada  
	while(i<50){//ciclo wghile, que termina cuando i es mayor que 50
		printf("Introduce el valor del numero entero %d: ",i);//imprime mensaje, i cuenta los numeros enteros
		scanf("%d",&numero);//lee el numero insertado por el teclado
		//Proceso
		suma=suma+numero;//calcual la suma de todos los numeros
		i++;//contador
		//Salida
		printf("La suma es %.2d\n",suma);//imprime la salida de la suma
	}
	
	return 0;
}
