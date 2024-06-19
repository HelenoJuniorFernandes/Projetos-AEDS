#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int direcao_para_angulo(char *direcao) {
    if (strcmp(direcao, "norte") == 0) {
        return 0;
    } else if (strcmp(direcao, "leste") == 0) {
        return 90;
    } else if (strcmp(direcao, "sul") == 0) {
        return 180;
    } else if (strcmp(direcao, "oeste") == 0) {
        return 270;
    }
    return -1; 
}
int menor_angulo(char *direcao_inicial, char *direcao_oasis) {
    int angulo_inicial = direcao_para_angulo(direcao_inicial);
    int angulo_oasis = direcao_para_angulo(direcao_oasis);

    int diferenca = abs(angulo_inicial - angulo_oasis);
    int menor_angulo = diferenca > 180 ? 360 - diferenca : diferenca;

    return menor_angulo;
}
int main() {
    char direcao_inicial[10], direcao_oasis[10];
printf("digite a direção inicial: ");
    scanf("%s", direcao_inicial);
printf("digite a direção do oásis: ");
    scanf("%s", direcao_oasis);
    int angulo = menor_angulo(direcao_inicial, direcao_oasis);
    printf("O angulo é: ""%d\n", angulo);
    return 0;
}
