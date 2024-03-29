#include <stdio.h>
#include <stdlib.h>

/********* TAREAS ************
 * Compila y ejecuta el código. Responde a las siguientes cuestiones:
 *  1. ¿Por qué cambia el valor de ptr[13] tras la asignación ptr = &c;?
 		Porque se le asigna un valor distinto al que tenía
 *  2. El código tiene (al menos) un error. ¿Se manifiesta en compilación o en ejecución? ¿Por qué?
 		En ejecución.
 		Porque se intenta liberar una zona de memoria asignada a una variable global
 *  3. ¿Qué ocurre con la zona reservada por malloc() tras a asignación ptr = &c;? ¿Cómo se puede acceder a ella?
 *     ¿Cómo se puede liberar dicha zona?
 		Se queda en el heap.
 		No se puede acceder a ella porque ptr apunta a &c.
 		free(ptr) antes de cambiar el valor de ptr
 ************/

int nelem;
int c;

int main(void)
{
	int *ptr;
	int i;

	c = 37;
	nelem = 127;
	ptr = (int*) malloc(nelem * sizeof(int));
	for (i=0; i < nelem; i++)
		ptr[i] = i;

	printf("ptr[0]= %d ptr[13]=%d \n", ptr[0], ptr[13]);

	ptr = &c;
	printf("ptr[0]= %d ptr[13]=%d \n", ptr[0], ptr[13]);

	free(ptr);

}

