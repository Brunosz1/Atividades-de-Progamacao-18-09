#include <stdio.h>
#include <string.h>

void bubble_sort(char lista[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (lista[j] > lista[j+1]) {
                 temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
}

int main() {
    char letras[100];
     int n;
     printf("Insira as letras sem espaço: ");
    scanf("%s", letras);
    n = strlen(letras);
    bubble_sort(letras, n);
    printf("Letras ordenadas: %s\n", letras);

    return 0;
}
