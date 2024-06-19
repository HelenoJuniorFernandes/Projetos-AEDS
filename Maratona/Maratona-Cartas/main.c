#include <stdio.h>
#include <stdlib.h>
int main() {
    int cartas[5];
    char ordem, ordenado = 1;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }
    for (int i = 0; i < 4; i++) {
        if (cartas[i] > cartas[i + 1]) {
            ordenado = 0;
            break;
        }
    }

    if (ordenado) {
        ordem = 'C';
    } else {
        ordenado = 1;
        for (int i = 0; i < 4; i++) {
            if (cartas[i] < cartas[i + 1]) {
                ordenado = 0;
                break;
            }
        }
        if (ordenado) {
            ordem = 'D';
        } else {
            ordem = 'N';
        }
    }
    printf("%c\n", ordem);

    return 0;
}