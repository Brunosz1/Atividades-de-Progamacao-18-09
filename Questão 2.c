#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int lista[], int n) {
    int i, j, temp;
    bool trocado;

    for (i = 0; i < n-1; i++) {
        trocado = false;
        for (j = 0; j < n-i-1; j++) {
            if (lista[j] > lista[j+1]) {
                 temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
                trocado = true;
            }
        }
        if (!trocado) {
            break;
        }
    }
}

int main() {
    int n, i;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int lista[n];
    printf("Digite os numeros inteiros: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }
     bubble_sort(lista, n);
     printf("Numeros ordenados: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }

    return 0;
}