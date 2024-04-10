/*
 ============================================================================
 Name        : Tarefa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double salario = 0;
	printf("digite o salario atual: ");
	scanf("%lf", &salario);
	double aumento = salario * 0.25;
	printf("O aumento foi de %lf", aumento);
	printf("\nO novo salario e de: %lf", salario = aumento);
}
