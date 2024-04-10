/*
 ============================================================================
 Name        : recursividade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//funcao recursiva em uma linha utilizando o operador ternario
int fatorialRecursivoUmaLinha(int c) {
	return (c == 0 || c == 1) ? 1 : (c * fatorialRecursivoUmaLinha(c - 1));

}
//funcao recursiva padrao
int fatorialRecursivo(int n) {
	//caso base
	if (n == 0 || n == 1) {
		return 1;
	} else {
		//chamada recursiva
		return n * fatorialRecursivo(n - 1);
	}
}
//solucao iterativa
int fatorialComLopp(int n) {
	int resultado = 1;
    //utilizando um loop for para multiplicar os numeros de 1 a n
	for (int i = 1; i <= n; i++) {
		resultado *= i;
	}
	return resultado;
}
int main(void) {
	int numero = 5;
	printf("O fatorial de %d e: %d\n", numero, fatorialRecursivo(numero)); //chamando a solucao recursiva
}
