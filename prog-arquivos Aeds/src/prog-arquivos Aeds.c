/*
 ============================================================================
 Name        : prog-arquivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Abre o arquivo para escrita
	FILE *arquivo = fopen("exemplo.txt", "w");

	// Verifica se o arquivo foi aberto com sucesso para escrita
	if (arquivo != NULL) {
		//Escreve o testo no arquivo
		fprintf(arquivo, "Hello, World\n");
		// Feche o arquivo de escrita
		fclose(arquivo);
		printf("Texto gravado com sucesso.\n");
	} else {
		// Se houver erro na abertura do arquivo para escrita
		printf("Erro ao abrir o arquivo para escrita.\n");
		return 1; //retorna codigo de errp
	}
	//Abre o arquivo para leitura
	arquivo = fopen("exemplo.txt", "r");

	//Verifica se o arquivo foi aberto com sucesso para leitura
	if (arquivo != NULL) {
		char linha[100]; // Define um buffer para armazenar a linha lida

		//le e imprime cada linha do arquivo
		while (fgets(linha, sizeof(linha), arquivo) != NULL) {
			printf("Conteudo lido do arquivo: %s", linha);
		}

		//FECHA O ARQUIVO DE LEITURA
		fclose(arquivo);
	} else {
		//se houver erro na abertura do arquivo para leitura
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1; //retorna um codigo de erro
	}
	return 0;
}


