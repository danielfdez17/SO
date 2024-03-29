#include <stdio.h>
#include <stdlib.h>

/********* TAREAS ************
 * Compila y ejecuta el código. Responde a las siguientes cuestiones:
 * 1. ¿Qué operador utilizamos para declarar una variable como un puntero a otro tipo?
 		El operador de casting
 * 2. ¿Qué operando utilizamos para obtener la dirección de una variable?
 		El &
 * 3. ¿Qué operando se utiliza para acceder al contenido de la dirección "a la que apunta" un puntero?
 		El *
 * 4. Hay un error en el código. ¿Se produce en  compilación o en ejecución? ¿Por qué se produce?
 		En ejecución, porque se modifica el contenido de una dirección de la que no 
 		se tiene el control porque se le ha asignado explícitamente
 ***********/
int c = 7;
int main(void)
{
	int *ptr;
	printf("Direccion de ptr %p. ptr apunta a %p. Direccion de c: %p Valor de c %d\n",
			&ptr, ptr, &c, c);

	ptr = &c;
	printf("Direccion de ptr %p,. ptr apunta a %p. Direccion de c: %p Valor de c %d\n",
			&ptr, ptr, &c, c);

	*ptr = 4;
	printf("ptr apunta a %p. Contenido de la direccion de ptr: %d Direccion de c: %p Valor de c %d\n",
			ptr, *ptr, &c, c);

	ptr =  (int*) 0x600a48;
	printf("Direccion de ptr %p. Valor de c %d\n", ptr, c);

	*ptr = 13;
	printf("Direccion de ptr %p. Valor de c %d\n", ptr, c);

    return 0;
}

