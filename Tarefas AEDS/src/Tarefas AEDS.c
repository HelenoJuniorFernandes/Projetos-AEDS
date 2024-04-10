/*
 ============================================================================
 Name        : Tarefas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double x, y, z, result, cont;
	cont = 1;

for (cont = 1; cont <= 3; cont++) {
		printf("Entre com tres numeros para obter a média entre eles: ");
		fflush(stdout);
		scanf("%lf %lf %lf", &x, &y, &z);

		result = (x + y + z) / 3;

		printf("A média desses tres números é: %lf\n", result);
	}

	return 0;
}
